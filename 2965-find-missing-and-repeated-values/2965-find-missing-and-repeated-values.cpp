class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> freq;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                freq[grid[i][j]]++;
            }
        }
        int rp=0;
        int mis=0;
        int n=grid.size()*grid.size();
        for(int i=1;i<=n;i++)
        {
            if(freq[i]==2)
            {
                rp=i;
            }
            if(freq[i]==0)
            {
                mis=i;
            }
        }
        return {rp,mis};
        
    }
};