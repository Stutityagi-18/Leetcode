class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        if(nums.empty())
        {
            return 0;
        }
        // sort(nums.begin(),nums.end());
        // int count=1,currlen=1;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==nums[i-1])
        //     {
        //         continue;
        //     }
        //     else if(nums[i]<nums[i-1]+1)
        //     {
        //         count++;
        //     }
        //     else{
        //         count=max(count,currlen);
        //         currlen=1;
        //     }
        // }
        // return max(count,currlen);
        int longest=0;

        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
           
        }
        for(int num:s)
        {
            if(s.find(num-1)==s.end())
            {
                int count=1;
                int currnum=num;
                while(s.find(currnum+1)!=s.end()){
                    count++;
                    currnum++;
                }
                longest=max(count,longest);
            }

        }
        return longest;

    }
};