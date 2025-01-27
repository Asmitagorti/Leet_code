int minMoves(int target, int maxDoubles) {
    int ct=0;
    while(target>1){
        if(target%2==0 && maxDoubles>0){
            target/=2;
            maxDoubles--;
        }
        else if(maxDoubles==0){
            ct+=target-1;
            break;
        }
        else target-=1;
        ct++;
    }
    return ct;
}
