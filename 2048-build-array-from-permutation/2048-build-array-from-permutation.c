/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *arr=(int*)malloc(numsSize*sizeof(int));
    int index=0;
    for(int i=0;i<numsSize;++i){
        arr[index++]=nums[nums[i]];
    }
    *returnSize=numsSize;
    return arr;
}