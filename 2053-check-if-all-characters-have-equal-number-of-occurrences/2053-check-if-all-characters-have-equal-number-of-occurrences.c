bool areOccurrencesEqual(char* s) {
    int len=strlen(s);
    int freq[26]={0};
    for(int i=0;i<len;++i){
        freq[s[i]-'a']++;
    }
    int one=freq[s[0]-'a'];
    for(int i=0;i<26;++i){
        if( freq[i]>0 && freq[i]!=one) return false;
    }
    return true;
}