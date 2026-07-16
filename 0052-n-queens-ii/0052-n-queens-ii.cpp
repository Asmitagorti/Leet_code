class Solution {
public:
    bool check(vector<string>&board,int i, int j,int n){
        for(int k=0;k<i;++k){
            if(board[k][j]=='Q') return false;
        }
        for(int row=i-1,col=j-1;row>=0 && col>=0;row--,col--){
            if(board[row][col]=='Q') return false;
        }
        for(int row=i-1,col=j+1;row>=0 && col<n;row--,col++){
            if(board[row][col]=='Q') return false;
        }
        return true;
    }
    void fun(vector<vector<string>>&res, vector<string>board, int n, int i, int j){
        if(i==n){
            res.push_back(board);
            return;
        }
        for(int j=0;j<n;++j){
            if(check(board,i,j,n)){
                board[i][j]='Q';
                fun(res,board,n,i+1,j);
                board[i][j]='.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>>res;
        vector<string>board(n,string(n,'.'));
        fun(res,board,n,0,0);

        return res.size();
    }
};