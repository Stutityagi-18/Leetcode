class Solution {
public:
void func(int i,vector<vector<int>>& ans,vector<int>& nums)
{
    int n=nums.size();
    if(i==n)
    {
        ans.push_back(nums);
    }
    for(int j=i;j<n;j++)
    {
        swap(nums[j],nums[i]);
        func(i+1,ans,nums);
        swap(nums[j],nums[i]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>ans;
    func(0,ans,nums);
    return ans;
}
};