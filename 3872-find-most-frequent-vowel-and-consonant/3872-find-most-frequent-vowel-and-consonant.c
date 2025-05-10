int isvowel(char ch){
    return (ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u');
}
int maxFreqSum(char* s) {
    int freq_vowel[1001]={0}, freq_cons[1001]={0};
    for(int i=0;s[i]!='\0';++i){
        char ch=s[i];
        if(isvowel(ch)){
            freq_vowel[ch]++;
        }
        else freq_cons[ch]++;
    }
    int hii=-1, puppy=-1;
    for(int i=0;i<1001;++i){
        if(freq_vowel[i]>hii) hii=freq_vowel[i];
    }
    for(int i=0;i<1001;++i){
        if(freq_cons[i]>puppy) puppy=freq_cons[i];
    }
    return hii+puppy;
}