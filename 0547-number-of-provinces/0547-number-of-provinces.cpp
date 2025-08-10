class Solution {
public:
void dfs(vector<vector<int>>& isConnected,int u,vector<bool>&visited)
{
    visited[u]=true;
    for(int v=0;v<isConnected.size();v++)
    {
        if(!visited[v] && isConnected[u][v]){
            dfs(isConnected,v,visited);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>visited(n,false);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i]){
                cnt++;
                dfs(isConnected,i,visited);
            }
        }
        return cnt;
    }
};