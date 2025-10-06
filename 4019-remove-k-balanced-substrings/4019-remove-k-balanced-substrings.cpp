class Solution {
public:
    string removeSubstring(string s, int k) {
        // while not empty check stack
        // track count
        // string str="";
        while (1) {
            string str = "";
            int n = s.size();
            vector<char>st; 
            // int ct = 0;
            // int len=st.size();
            for (int i = 0; i < n; i++) {
                if (s[i] == '(') {
                    st.push_back('(');
                } 
                else if (s[i] == ')') {
                    int open=0;
                    while(!st.empty() && st.back()=='(' && open<k){
                        open++;
                        st.pop_back();
                    }
                    if(open==k){
                        int close=1;
                        // we have starting k open
                        // we need to check if we have k consective ')' characters
                        while(i+1<n  && s[i+1]==')' && close<k){
                            close++;
                            i++;
                        }
                        if(close==k){
                            // we have complete k=balanced 
                            continue;
                        }
                        else {
                            for(int j=0;j<open;++j){
                                st.push_back('(');
                            }
                            for(int j=0;j<close;++j){
                                st.push_back(')');
                            }
                        }
                    }
                    else{
                        // theres not enough '('
                        for(int l=0;l<open;++l){
                            st.push_back('(');
                        }
                        st.push_back(')');// push the current s[i]
                    }
                } 
            }
            // merge
            for(int i=0;i<st.size();++i) {
                str+= st[i]; // reversing
                // st.pop();
            }
            if (str == s) break; // no change in the string, no k-balanced ()
            s = str;
        }
        return s;
    }
};