int minimumRecolors(char* blocks, int k) {
    int ct=0;
    int len=strlen(blocks);
    for(int i=0;i<k;++i){
        if(blocks[i]=='W') ct++; // counts how many whites in the first window
    }
    int max=ct;
    for(int i=1;i<=len-k;++i){ // tells u how many slides u can do
        if(blocks[i-1]=='W') ct--; // remove last element
        if(blocks[i+k-1]=='W') ct++; // add the new element
        // both of these two if cases, allows us to 'slide' throughout the len
        if(ct<max) max=ct;
    }
    return max;
}