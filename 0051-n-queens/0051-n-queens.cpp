class Solution {
public:
    bool check(vector<string>&board,int n, int i, int j){
        for(int k=0;k<i;++k){
            if(board[k][j]=='Q') return false;
        }
        for (int row=i-1,col=j- 1;row>=0 && col>=0;--row, --col) {
            if (board[row][col] == 'Q') return false;
        }
        for (int row =i-1,col=j+1;row >=0 && col<n;--row,++col) {
            if (board[row][col] == 'Q') return false;
        }
        return true;
    }
    void fun(vector<string>&board,vector<vector<string>>&res , int n, int i, int j){
        if(i==n) {
            res.push_back(board);
            return;
        };
        // check diag + col_row function
        for(int j=0;j<n;++j){
            if(check(board,n,i,j)) {
                board[i][j]='Q';
                fun(board,res,n,i+1,j);
                board[i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res; 
        vector<string> board(n, string(n, '.')); 
        // place Q along the way, backtrack put .
        fun(board,res,n,0,0);

        return res;

    }
};