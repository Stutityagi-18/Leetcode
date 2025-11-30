class Solution {
public:
void dfs(vector<string> &res,string s,int open,int close,int n)
{
    if(s.size()==2*n)
    {
        res.push_back(s);
        return;
    }
    if(open<n)
    {
        dfs(res,s+'(',open+1,close,n);
    }
    if(close<open)
    {
        dfs(res,s+')',open,close+1,n);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        dfs(res,"",0,0,n);
        return res;
        
    }
};