class Solution {
public:
    void func(vector<int>& candidates, int target,vector<vector<int>>&ans,int index,vector<int>& ds)
    {
        if(index==candidates.size())
        {
            if(target==0)
            {
                return ans.push_back(ds);
            }
            return;
        }
        
        if(candidates[index]<=target)
        {
            ds.push_back(candidates[index]);
            func(candidates,target-candidates[index],ans,index,ds);
            ds.pop_back();
        }
        func(candidates,target,ans,index+1,ds);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>ds;//to store current combination
        func(candidates,target,ans,0,ds);
        return ans;
    }
};