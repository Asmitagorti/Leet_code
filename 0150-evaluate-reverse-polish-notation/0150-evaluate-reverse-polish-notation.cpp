class Solution {
public:
    int operation(int x,int y, string ch){
        if(ch=="+") return x+y;
        if(ch=="-") return x-y;
        if(ch=="*") return x*y;
        if(ch=="/") return x/y;
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for(int i=0;i<n;++i){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" ||tokens[i]=="/"){
                int y=st.top();
                st.pop();
                int x=st.top();
                st.pop();
                st.push(operation(x,y,tokens[i]));
            }
            else st. push(stoi(tokens[i]));// push the number
        }
        return st.top();
    }
};