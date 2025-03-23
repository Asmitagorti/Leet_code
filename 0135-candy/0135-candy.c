int candy(int* ratings, int ratingsSize) {
    // we iterate in both directions here
    // take case :
    // [1 2 3 2 1]
    // forward : [ 1 2 3 1 1 ]
    // which ir wrong, as ratings[3] has a greater rating than ratings[4]
    // but we give them the same candies, i.e 1
    // therefore we iterate backwards, add add 1 to the case where
    int candies[ratingsSize+1];
    for(int i=0;i<ratingsSize;++i){
        candies[i]=1;
    }
    // traversing forward
    for(int i=1;i<ratingsSize;++i){
        if(ratings[i]>ratings[i-1]){
            candies[i]=candies[i-1]+1;
        }
    }
    // traversing backward
    for(int i=ratingsSize-2;i>=0;--i){
        if(ratings[i]>ratings[i+1]){
            candies[i]=(candies[i]>candies[i+1]+1)?candies[i]:candies[i+1]+1;
        }
    }
    int sum=0;
    for(int i=0;i<ratingsSize;++i){
        sum+=candies[i];
    }
    return sum;
}