class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int positiveindex=0;
        int negativeindex=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                ans[negativeindex]=nums[i];
                negativeindex+=2;

            }
            else{
                ans[positiveindex]=nums[i];
                positiveindex+=2;
            }
        }
        return ans;
        
    }
};