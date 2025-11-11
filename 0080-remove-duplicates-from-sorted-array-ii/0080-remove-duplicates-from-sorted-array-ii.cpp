class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)
        {
            return n;
        }
        int i=2;//because first two elements are allowed 
        for(int j=2;j<=n-1;j++)
        {
            if(nums[j]!=nums[i-2])
            {
                nums[i]=nums[j];
                i++;
            }

        }
        return i;
        
    }
};