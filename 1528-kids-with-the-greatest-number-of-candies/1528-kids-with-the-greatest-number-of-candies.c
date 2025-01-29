/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *arr=(bool*)malloc(candiesSize*sizeof(bool));
    int max=candies[0];
    for(int i=1;i<candiesSize;++i){
        if(candies[i]>max){
            max=candies[i];
        }
    }
    for(int i=0;i<candiesSize;++i){
        arr[i]=(candies[i]+extraCandies>=max);
    }
    *returnSize=candiesSize;
    return arr;
}