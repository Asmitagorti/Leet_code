bool checkString(char* s) {
    for(int i=0;s[i]!='\0';++i){
        if(s[i]=='b' && s[i+1]=='a'){
            return false;
        }
    }
    return true;
}