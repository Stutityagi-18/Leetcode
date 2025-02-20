class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        int i;
        int ans=0;
        for(i=0;i<n;i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};