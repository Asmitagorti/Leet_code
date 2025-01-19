char* defangIPaddr(char* address) {
    int len=strlen(address);
    char* str=(char*)malloc(len*sizeof(int));
    int j=0;
    for(int i=0;i<len;++i){
        if(address[i]=='.'){
            str[j++]='[';
            str[j++]='.';
            str[j++]=']';
        }
        else str[j++]=address[i];
    }
    str[j]='\0';
    return str;
}