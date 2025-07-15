class Solution {
public:
    void form(int c1, int c2, string s, int n, vector<string>&res){
        // vector<string>res;
        // HIIIIII
        // c1 -> '(' , c2 -> ')'
        // basically, i want to push the string into the vector, once the base case is satisfied
        // else i will form the strings, using both the recursive calls
        // cout<<c1<<" "<<c2<<endl;
        if(c1==n && c2==n) {
            // cout<<c1<<" "<<c2<<endl;
            // res.insert(res.end(),s); // base case
            // cout<<s<<endl;
            res.push_back(s);
            return;
            // return res;
        }
        if(c1<n) {
            form(c1+1,c2,s+'(',n,res);// recursive calls, adds '('
            
        }
        if(c2<c1){ // u dont want more ) than ( !! :D
            form(c1,c2+1,s+')',n,res);
    
        }
     
    }
    vector<string> generateParenthesis(int n) {
        // pick and un pick
        vector<string>res;
        form(0,0,"",n,res);
        return res;

    }
};