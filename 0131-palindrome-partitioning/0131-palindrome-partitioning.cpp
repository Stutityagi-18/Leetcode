class Solution {
public:
    bool palindrome(string &s,int start,int end)
    {
        while(start<end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void backtrack(int index,string &s,vector<string>& ds,vector<vector<string>>& res)
    {
        if(index==s.length())
        {
            res.push_back(ds);
            return;
        }
        for(int i=index;i<s.length();i++)
        {
            if(palindrome(s,index,i))
            {
                ds.push_back(s.substr(index,i-index+1));
                backtrack(i+1,s,ds,res);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
         vector<vector<string>>res;
         vector<string>ds;
         backtrack(0,s,ds,res);
         return res;
        
    }
};