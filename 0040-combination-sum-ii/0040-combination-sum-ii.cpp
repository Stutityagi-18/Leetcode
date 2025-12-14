class Solution {
public:
 void func(vector<int>& candidates, int target,vector<vector<int>>&ans,int index,vector<int>& ds)
{
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<candidates.size();i++)
        {
            if(i>index && candidates[i]==candidates[i-1])
            {
                continue;
            }
            if(candidates[i]>target)
            {
                break;
            }
            ds.push_back(candidates[i]);
            func(candidates,target-candidates[i],ans,i+1,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>ds;//to store current combination
        func(candidates,target,ans,0,ds);
        return ans;
        
    }
};