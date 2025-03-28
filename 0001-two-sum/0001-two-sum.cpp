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
    }
};