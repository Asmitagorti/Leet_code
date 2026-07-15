class Solution {
public:
    bool box(vector<vector<char>>& board,int i, int j){
        int i1=i/3,v1=i1*3;
        int j1=j/3,v2=j1*3;

        for(int l=0;l<3;++l){
            for(int m=0;m<3;++m){
                if(v1+l==i && v2+m==j) continue;
                if(board[i][j]==board[v1+l][v2+m]) return false;
            }
        }
        return true;
    }
    bool col_row(vector<vector<char>>& board,int i, int j){
        // cout<<i<<" "<<j<<endl;
        for(int k=0;k<9;++k){
            if(board[i][j]==board[k][j] && k!=i) {
                // cout<<"first "<<i<<" "<<j<<" "<<k<<endl;
                return false;
            }
            if(board[i][j]==board[i][k] && k!=j) {
                // cout<<"second "<<i<<" "<<j<<" "<<k<<endl;
                return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool flag=true;
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]!='.'){
                    if(!box(board,i,j) || !col_row(board,i,j)){
                        flag=false;
                        break;
                    }
                }
            }
        }
        return flag;
    }
};