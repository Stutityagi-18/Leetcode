class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // brute force approach
        int n=nums.size();
        int i,maxi,sum;
        maxi=INT_MIN;
        for(i=0;i<n;i++)
        {
            // for(j=i;j<n;j++)
            // {
                if(sum<0)
                    sum=0;
                // for(k=i;k<=j;k++)
                sum=sum+nums[i];
                 maxi=max(sum,maxi);
            // }
        }
        return maxi;
    }
};