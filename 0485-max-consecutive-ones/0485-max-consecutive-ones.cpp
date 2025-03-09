class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max_cnt=0;
        int maxi;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(count>max_cnt)
                {
                    max_cnt=count;
                }
                
                
            }
            else{
                count=0;
            }
            maxi=max(max_cnt,count);
             
        }
        return maxi;
        
    }
        
};