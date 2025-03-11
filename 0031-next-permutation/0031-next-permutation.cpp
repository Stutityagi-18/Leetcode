class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // we could use this when we have non-void return type of function
        // next_permutation(nums.begin(),nums.end());
        // return nums;
        // -------optimal solution----------
        int index=-1;
        int n =nums.size();
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>index;i--)
        {
            if(nums[i]>nums[index])
            {
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index+1,nums.end());
        return;
        
    }
};