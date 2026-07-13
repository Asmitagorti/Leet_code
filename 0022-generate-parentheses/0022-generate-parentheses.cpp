class Solution {
public:
// bool hi(string s, int n){
//     int c1=0,c2=0;
//     for(auto i:s){
//         if(i=='(') c1++;
//         else c2++;
//     }
//     return (c1==n && c2==n);
// }
void fun(vector<string>&fin, int n, string s,int c1,int c2){
    if(c1==n && c2==n){
        fin.push_back(s);
        return;
    }
    if(c1<n && c1>=c2) {
        s.push_back('(');
        fun(fin,n,s,c1+1,c2);
        s.pop_back();
    }
    if(c2<n && c1>=c2) {
        s.push_back(')');
        fun(fin,n,s,c1,c2+1);
        s.pop_back();
    }
    
}
    vector<string> generateParenthesis(int n) {
        vector<string>fin;
        string s;
        fun(fin,n,s,0,0);

        return fin;
    }
};