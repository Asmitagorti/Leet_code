class Solution {
public:
    int vowel(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    }
    int cons(char ch){
        return( !vowel(ch) && ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')));
    }
    bool isValid(string word) {
        int len=word.length();
        int flag=0, flag1=0, flag2=0, flag3=0, flag4=0,flag5=0;
        if(len<3) flag=1;
        if(len>=3){
            for(int i=0;i<len;++i){
                char ch=word[i];
                if(isalpha(ch)) flag1=1;
                if(isdigit(ch-'0')) flag2=1;
                if(vowel(ch)) flag3=1; 
                if(cons(ch)) flag4=1; 
                if(ch=='@' || ch=='#' || ch=='$') flag5=1;
            }
        }
        return ((flag1==1 || flag2==1) && (flag3==1 && flag4==1 && flag5==0 && flag==0));
    }
};