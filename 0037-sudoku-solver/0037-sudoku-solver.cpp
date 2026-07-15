class Solution {
public:
    bool row[9][9]={false};
    bool col[9][9]={false};
    bool box[9][9]={false};
    vector<vector<char>> fun(vector<vector<char>>& board,int i, int j){
        if(j==9){
            i++;
            j=0;
        }
        if(i==9) return board;
        int idx = (i/3)*3+(j/3);
        if(board[i][j]=='.'){
            for(int k=0;k<9;++k){
                if(row[i][k]==false && col[j][k]==false && box[idx][k]==false){
                    board[i][j]=k+'1';
                    row[i][k]=true;
                    col[j][k]=true;
                    box[idx][k]=true;
                    vector<vector<char>> res = fun(board,i,j+1);
                    if(res.size()>1) return res;
                    board[i][j]='.';
                    row[i][k]=false;
                    col[j][k]=false;
                    box[idx][k]=false;
                }
            }
        }
        else return fun(board,i,j+1);
        return {};
    }
    void solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]!='.'){
                    int val=board[i][j]-'1';
                    int idx=(i/3)*3+(j/3);
                    row[i][val]=true;
                    col[j][val]=true;
                    box[idx][val]=true;
                }
            }
        }
        fun(board,0,0);
    }
};