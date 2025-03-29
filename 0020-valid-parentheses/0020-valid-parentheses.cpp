class Solution {
public:
    char stack[10001];
    int top = -1;
    
    char pop(){
        return stack[top--];
    }
    
    void push(char ch){
        if(top == 10000) {
            return;
        }
        stack[++top] = ch;
    }
    
    bool Empty(){
        return top == -1;
    }
    
    bool isValid(string s) {
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                push(s[i]);
            } else {
                if(Empty()){
                    return false;
                }
                if(s[i] == ')'){
                    if(stack[top] != '(')
                        return false;
                    pop();
                }
                else if(s[i] == '}'){
                    if(stack[top] != '{')
                        return false;
                    pop();
                }
                else if(s[i] == ']'){
                    if(stack[top] != '[')
                        return false;
                    pop();
                }
            }
        }
        return Empty();
    }
};
