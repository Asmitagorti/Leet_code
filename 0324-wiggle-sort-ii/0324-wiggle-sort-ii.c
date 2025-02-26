int compare(const void *a, const void *b){
    return ((*(int*)a)-*(int*)b); // sorts in ascending order
}
void wiggleSort(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int arr[numsSize];
    for (int i = 0; i < numsSize; i++) {
        arr[i] = nums[i];
    }
    int mid=0;
    mid=(numsSize+1)/2;
    int high=numsSize-1, low=mid-1;
    for(int i=0;i<numsSize;++i){
        if(i%2==0) nums[i]=arr[low--];
        else nums[i]=arr[high--];
    }
}