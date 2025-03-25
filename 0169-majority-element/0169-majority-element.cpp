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
        
        map<int,int>mpp;
        int i;
        for(i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        //searching for majority element
        for(auto it:mpp)
        {
            if(it.second > (n/2))
            {
                return (it.first);
            }
        }
        return -1;
        
        
    }
};