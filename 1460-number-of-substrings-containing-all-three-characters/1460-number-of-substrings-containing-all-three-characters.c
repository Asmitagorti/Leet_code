int all(int letters[3]){
    for(int i=0;i<3;++i){
        if(letters[i]==0) return 0;
    }
    return 1;
}
int numberOfSubstrings(char* s) {
    int len = strlen(s);
    int count = 0;
    int letters[3] = {0};
    int p1 = 0, p2 = 0;
    
    while (p2 < len) {
        letters[s[p2] - 'a']++;
        while (all(letters)) {
            count += (len - p2);
            letters[s[p1] - 'a']--; // reducing window
            p1++; // moving p1 forward
        }
        p2++; 
    }
    return count;
}