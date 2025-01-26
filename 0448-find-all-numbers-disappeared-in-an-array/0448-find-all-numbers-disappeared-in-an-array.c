/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* arr=(int*)malloc(numsSize*sizeof(int));
    int freq[100001]={0};
    int index=0;
    for(int i=0;i<numsSize;++i){
        freq[nums[i]]++;
    }
    for(int i=1;i<=numsSize;++i){
        if(freq[i]==0) arr[index++]=i;
    }
    *returnSize=index;
    return arr;
}