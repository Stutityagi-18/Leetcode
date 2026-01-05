class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        long long absum=0;
        int negcnt=0;
        int minAb=INT_MAX;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]<0)
                {
                    negcnt++;
                }
                int absval=abs(matrix[i][j]);
                absum+=absval;
                minAb=min(minAb,absval);

            }
        }
        if(negcnt%2==0)
        {
            return absum;
        }
        else
        {
            return absum-2LL*minAb;
        }
        
    }
};