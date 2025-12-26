class Solution {
public:
    bool isSafe(int row,int col,vector<string> board,int n)
    {
       // checking the left side cuz queens are placed column by column from left to right
        // Store original row and column because we will modify them while checking
        int dr=row;
        int dc=col;
        //for upper diagonal check
        while(row>=0 && col>=0)//because for rows we are going up & for cols we are going left
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row--;
            col--;
        }
        //for left column check
        // Reset row and col to original position
        col=dc;
        row=dr;
        //because we are going towards left side to check if there any queen placed already
        while(col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            col--;
        }
        //for lower diagonal check
        row=dr;
        col=dc;
        //cuz row is getting increased while going down and col is going to check at left side
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,vector<vector<string>>& ans,vector<string>& board,int n)
    {
        if(col==n)//base condition
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                solve(col+1,ans,board,n);//checking for next column
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,ans,board,n);
        return ans;

        
    }
};