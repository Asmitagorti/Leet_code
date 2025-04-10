int stack[100001];
    int top=-1;
    void push(int ch){
        stack[++top]=ch;
    }
    char isEmpty(){
        return(top==-1);
    }
    int pop(){
        return stack[top--];
    }
    void reverse(char *s, int l, int r){
        while(l<r){
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            // printf("%s\n",s);
            l++;
            r--;
        }
    }
// defined functions
char* reverseParentheses(char* s) {
static   char str[100001];
int k=0,l=0,r=0;
    for(int i=0;s[i]!='\0';++i){
        if(s[i]=='('){
            // push index to stack
            push(i);
        }
        else if(s[i]==')'){
            // when we encounter )
            r=i;
            l=pop();
            if(l==-1) continue;
            // printf("%d %d",l,r);
            reverse(s,l+1,r-1);
        }
        // printf("\n");
    }
    for(int i=0;s[i]!='\0';++i){
        if(s[i]!='(' && s[i]!=')') str[k++]=s[i];
    }
    str[k]='\0';
    return str;
    
}
