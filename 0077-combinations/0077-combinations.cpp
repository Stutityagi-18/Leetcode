class Solution {
public:
    void backtrack(int i,vector<vector<int>>& ans,vector<int>& ds,int n,int k)
    {
        if(ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }
        for(int j=i;j<=n;j++)
        {
            ds.push_back(j);
            backtrack(j+1,ans,ds,n,k);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        backtrack(1,ans,ds,n,k);
        return ans;
    }
};