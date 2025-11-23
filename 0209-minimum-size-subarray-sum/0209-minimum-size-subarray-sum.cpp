class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        //********************brute**************
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         if(sum>=target)
        //         {
        //             ans=min(ans,j-i+1);
        //             break;
        //         }
        //     }
        // }

       //************************optimal*************
        int l=0;
        int sum=0;
        for(int r=0;r<n;r++)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                ans=min(ans,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};