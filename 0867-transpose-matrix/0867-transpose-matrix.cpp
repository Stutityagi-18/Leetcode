class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
         int n=matrix.size();
        int m=matrix[0].size();
        int i;
        int j;
        vector<vector<int>> transposed(m,vector<int>(n));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                transposed[j][i]=matrix[i][j];
            }
       
        }
         return transposed ;
    }
};