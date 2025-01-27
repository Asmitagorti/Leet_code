/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int freq[101]={0};
    int pro[101]={0};
    int *arr=(int*)malloc(numsSize*sizeof(int));
    int index=0;
    for(int i=0;i<numsSize;++i){
        freq[nums[i]]++;
    }
    for(int i=0;i<numsSize;++i){
        if(freq[nums[i]]>1 && !pro[nums[i]]) {
            arr[index++]=nums[i];
            pro[nums[i]]=1;
        }
    }
    *returnSize=index;
    return arr;
}