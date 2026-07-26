class Solution {
public:
    void fun(vector<vector<char>>&b, int i, int j){
        int n=b.size(),m=b[0].size();
        if(i<0 || i>=n|| j<0 || j>=m){
            return;
        }
        if(b[i][j]=='.') return;
        else b[i][j]='.';
        fun(b,i+1,j);
        fun(b,i,j-1);
        fun(b,i-1,j);
        fun(b,i,j+1);
    }
    int countBattleships(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        int ct=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(board[i][j]=='X'){
                    fun(board,i,j);
                    ct++;
                }
            }
        }
        return ct;
    }
};