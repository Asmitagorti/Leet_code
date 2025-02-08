int compare(const void* a, const void *b){
    char *nums1=*(char**)a;
    char *nums2=*(char**)b;
    int len1=strlen(nums1);
    int len2=strlen(nums2);
    if(len1!=len2){
        return len2-len1;
    }
    return strcmp(nums2,nums1);
}
char* kthLargestNumber(char** nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(char*),compare);
    return nums[k-1];
}