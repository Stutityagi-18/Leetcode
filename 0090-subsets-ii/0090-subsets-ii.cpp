class Solution {
public:
    void func(int i,vector<int>& ds,set<vector<int>>& ans,vector<int>& nums)
    {
        if(i==nums.size())
        {
            ans.insert(ds);
            return;
        }
        //including element at current index
        ds.push_back(nums[i]);
        func(i+1,ds,ans,nums);
        //backtrackk to explore the other choice
        ds.pop_back();    
        //not including element at current index
        func(i+1,ds,ans,nums);
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        func(0,ds,ans,nums);
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;

        
    }
};