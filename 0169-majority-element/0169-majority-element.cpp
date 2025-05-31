class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n=nums.size();
        //  int count,i;
        // // return nums[n/2];
        // for( i=0;i<n;i++)
        // {
        //     count=0;
        //     for(int j=0;j<n;j++)
        //     {
        //         if(nums[j]==nums[i])
        //         {
        //             count++;
        //         }
        //     }
        // }
        // if(count > (n/2))
        //     return nums[i];
        // ************better approach*********
        
        // map<int,int>mpp;
        // int i;
        // for(i=0;i<n;i++)
        // {
        //     mpp[nums[i]]++;
        // }
        // //searching for majority element
        // for(auto it:mpp)
        // {
        //     if(it.second > (n/2))
        //     {
        //         return (it.first);
        //     }
        // }
        //most optimal approach
        int cnt=0;
        int el,i;
        for(i=0;i<n;i++)
        {
            if(cnt==0)
            {
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el)
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==el)
            {
                cnt1++;
            }
        }
        if(cnt1>(n/2))
        {
            return el;
        }
        else
        {
        return -1;
        }
        
        
    }
};