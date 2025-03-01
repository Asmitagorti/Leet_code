/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int*arr=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize-1;++i){
        if(nums[i]==nums[i+1]){
            nums[i]*=2;
            nums[i+1]=0;
        }
    }
    int index=0;
    for(int i=0;i<numsSize;++i){
        if(nums[i]!=0){
            arr[index++]=nums[i];
        }
    }
    while(index<numsSize){ // remaining 
        arr[index++]=0;
    }
    *returnSize=index;
    return arr;

}