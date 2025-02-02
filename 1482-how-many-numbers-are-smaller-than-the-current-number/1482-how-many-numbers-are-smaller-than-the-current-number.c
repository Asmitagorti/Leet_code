/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int*arr=(int*)malloc(numsSize*sizeof(int));
    int ct;
    for(int i=0;i<numsSize;++i){
        ct=0;
        for(int j=0;j<numsSize;++j){
            if(i!=j && nums[j]<nums[i]) ct++;
        }
        arr[i]=ct;
    }
    *returnSize=numsSize;
    return arr;
}