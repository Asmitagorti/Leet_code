/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int*arr=(int*)malloc(2*sizeof(int));
    int left=0, right=numbersSize-1;
    while(left<right){
        int sum=numbers[left]+numbers[right];
        if(sum==target){
            arr[0]=left+1;
            arr[1]=right+1;
            *returnSize=2;
            return arr;
        }
        else if(sum<target) left++;
        else right--;
    }
    return arr;
}