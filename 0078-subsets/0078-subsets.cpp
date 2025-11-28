class Solution {
public:
void func(int index,vector<int> &ds,vector<vector<int>> &ans,vector<int> &nums)
{
    if(index>=nums.size())
    {
        ans.push_back(ds);
        return;
    }
    //taking up the next element
    ds.push_back(nums[index]);
    func(index+1,ds,ans,nums);
    //not taking the element
    ds.pop_back();
    func(index+1,ds,ans,nums);
}
vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        func(0,ds,ans,nums);
        return ans;
    }
};