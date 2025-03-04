int vowel(char ch) {
    return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
int maxVowels(char* s, int k) {
    int max=0, cur=0;
    int len=strlen(s);
    for(int i=0; i<k; ++i) {
        cur+=vowel(s[i]); // makes sure we dont repeatedly check the first window
    }
    max=cur;
    for(int i=k; i<len; ++i) {
        cur+=vowel(s[i])-vowel(s[i-k]); //this is the window of characters
        if(cur>max) max=cur;
    }
    return max;
}