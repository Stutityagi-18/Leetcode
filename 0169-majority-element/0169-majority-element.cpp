class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        unordered_map<int,int>mpp;
        for(int i:nums)
        {
            mpp[i]++;
        }
        int m=mpp.size();
        for(auto& it:mpp)
        {
            if(it.second >(n/2))
            {
                ans=it.first;
            }
        }
        return ans;
        
    }
};