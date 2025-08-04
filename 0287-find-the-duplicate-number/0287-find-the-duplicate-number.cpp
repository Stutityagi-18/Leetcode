class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
         
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            return nums[i];
            int cnt=0;
            // for(int j=0;j<n;j++)
            // {
            //     if(nums[j]==nums[i])
            //     {
            //         cnt++;
            //     }
            // }
            // if(cnt>=2)
            // {
            //     return nums[i];
            // }
        }
        
        return -1;
    }
};