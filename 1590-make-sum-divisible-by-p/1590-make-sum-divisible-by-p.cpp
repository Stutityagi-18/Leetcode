class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        long sum=0;
        for(int i=0;i<n;i++)
        { 
            sum+=nums[i];
        }
        int rem=sum%p;
         if(rem==0)
        {
            return 0;   
        }
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        int minlen=n;
        int curr=0;
        for(int i=0;i<n;i++)
        {
            curr=(curr+nums[i])%p;
            int target=(curr-rem+p)%p;
            if(mpp.find(target)!=mpp.end())
            {
                minlen=min(minlen,i-mpp[target]);
            }
            mpp[curr]=i;
        }        
        return minlen==n?-1:minlen;
        
    }
};