class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        // vector<int>diag(n);
        int n=grid.size();
        for(int i=0;i<n;++i){
            int start=i,j=0; // for bottom left + diag
            vector<int>diag;
            while(start!=n && j!=n){
                diag.push_back(grid[start][j]);
                start++;j++;
            }
            sort(diag.rbegin(), diag.rend());
            start=i,j=0;
            int k=0;
            while(start!=n && j!=n){
                grid[start][j]=diag[k++];
                start++;j++;
            }
        }
         for(int i1=1;i1<n;++i1){
            int s1=0,j1=i1; // for top
            vector<int>diag1;
            while(s1!=n && j1!=n){
                diag1.push_back(grid[s1][j1]);
                s1++;j1++;
            }
            sort(diag1.begin(), diag1.end());
            s1=0,j1=i1;
            int k1=0;
            while(s1!=n && j1!=n){
                grid[s1][j1]=diag1[k1++];
                s1++;j1++;
            }
        }
        return grid;
        
    }
};