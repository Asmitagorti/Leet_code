class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int l=0, r=0;
        int m=mat.size(), n=mat[0].size();
        vector<int>diag;
        while(diag.size()<m*n){
            diag.push_back(mat[l][r]);
            if((l+r)%2==0){
                if(r==n-1){
                    l++;
                }
                else if(l==0){
                    r++;
                }
                else{
                r+=1;
                l-=1;
                }
                // diag.push_back(mat[l][r]);
            }
            else if ((l+r)%2==1){
                if(l==m-1){
                    r++;
                }
                else if(r==0){
                    l++;
                }
                else{
                l+=1;
                r-=1;
                }
                // diag.push_back(mat[l][r]);
            }
        }
        return diag;
    }
};