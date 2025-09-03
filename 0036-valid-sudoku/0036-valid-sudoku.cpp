class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++)
        {
            for(int col=0;col<9;col++)
            {
                if(board[row][col]=='.')
                {
                    continue;
                }
                char ch=board[row][col];
                for(int i=0;i<9;i++)
                {
                    if(i!=col && board[row][i]==ch) return false;
                    if(i!=row && board[i][col]==ch ) return false;
                    int subrow=(row/3)*3+(i/3);
                    int subcol=(col/3)*3+(i%3);
                    if((subrow!=row || subcol!=col)&&(board[subrow][subcol]==ch)) return false;
                }
            }
        }
        return true;
    }
};