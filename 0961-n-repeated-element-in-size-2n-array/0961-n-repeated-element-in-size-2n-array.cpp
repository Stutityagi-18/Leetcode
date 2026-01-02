class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int& x:nums)
        {
            mpp[x]++;
        }
        int m=mpp.size();
        int ans=0;
        for(auto &i:mpp)
        {
            if(i.second==n/2)
            {
               ans=i.first;
            }
        }
        return ans;
        
    }
};