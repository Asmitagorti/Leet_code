int numJewelsInStones(char* jewels, char* stones) {
    int count=0;
    int len=strlen(stones);
    int len2=strlen(jewels);
    for(int i=0;i<len;++i){
        for(int j=0;j<len2;++j){
            if(stones[i]==jewels[j]){
                count++;
            }
        }
    }
    return count;
}