int compare(const void *a, const void *b){
    return (*(int*)a-*(int*)b);// ascending order, so least element is at index 0
}
int minMoves(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    int min=nums[0];
    int res=0;
    for(int i=0;i<numsSize;++i){
        res+=(nums[i]-min);
    }
    return abs(res);
}