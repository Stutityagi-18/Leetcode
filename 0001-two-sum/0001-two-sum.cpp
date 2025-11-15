class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //        if(nums[i]+nums[j]==target)
        //         {
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        // -----optimised approach------
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }

        // Sorting based on values
        sort(indexedNums.begin(), indexedNums.end());

        int l = 0, u = nums.size() - 1;
        while (l < u) {
            int sum = indexedNums[l].first + indexedNums[u].first;
            if (sum < target) {
                l++;
            } else if (sum > target) {
                u--;
            } else {
                return {indexedNums[l].second, indexedNums[u].second};
            }
        }
        return {};
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // int l=0;
        // int r=n-1;
        // while(l<r)
        // {
        //    int sum=nums[l]+nums[r];
        //     if(sum==target)
        //     {
        //         return {l,r};
        //     }
        //     else if(sum<target)
        //     {
        //         l++;
        //     }
        //     else{
        //         r--;
        //     }
        // }
        // return{};
        // //this solution didnt work because we are first sorting an array so its returning[0,1] but this should return [1,2]
    }
};