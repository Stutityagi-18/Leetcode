class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        // int res=nums[0];
        // for(int i=0;i<n-1;i++)
        // {
        //     int p=nums[i];
        //     for(int j=i+1;j<n;j++)
        //     {
        //         res=max(res,p);
        //         p*=nums[j];
        //     }
        //     res=max(res,p);
        // }
        int ans=INT_MIN;
        int pre=1;
        int suff=1;
        for(int i=0;i<n;i++)
        {
            if(pre==0)
            {
                pre=1;
            }
            if(suff==0)
            {
                suff=1;
            }
            pre*=nums[i];
            suff*=nums[n-i-1];
            ans=max(ans,max(pre,suff));
        }
        
        return ans;
    }
};