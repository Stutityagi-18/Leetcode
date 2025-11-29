class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
        }
        // int op=0;
        // if(sum%k==0)
        // {
        //     return 0;
        // }
        // else
        // {
        //     while(sum%k!=0)
        //     {
        //         sum--;
        //         op++;
        //     }
        // }
        // return op;
        int op=sum%k;
        return op==0?0:op;
    }
};