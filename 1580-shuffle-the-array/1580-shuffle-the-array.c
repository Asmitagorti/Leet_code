

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *arr=(int*)malloc(numsSize*sizeof(int));
    int index=0;
    for(int i=0;i<n;++i){
        arr[index++]=nums[i];
        arr[index++]=nums[n+i];
    }
    *returnSize=numsSize;
    return arr;
}