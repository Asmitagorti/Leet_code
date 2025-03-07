/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int Primes(int n){
    if(n==0 || n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return n;
}
int* closestPrimes(int left, int right, int* returnSize) {
    int *arr = (int*)malloc(2*sizeof(int));
    int res[1000000],k=0,count=0;
    for(int i=left;i<=right;i++){
        if(Primes(i)){
        res[k++]=i;
        count++;
        }
    }
    if (count < 2) {
        arr[0] = -1;
        arr[1] = -1;
        *returnSize = 2;
        return arr;
    }
    int minDiff = 1e9;  // Initialize minimum difference to a large number
    for (int i = 0; i < count - 1; i++) {
        int diff = res[i + 1] - res[i];  // Calculate the difference between consecutive primes
        if (diff < minDiff) {  // If a smaller difference is found, update the result
            minDiff = diff;
            arr[0] = res[i];  // First prime
            arr[1] = res[i + 1];  // Second prime
        }
    }
    *returnSize=2;
    return arr;

}