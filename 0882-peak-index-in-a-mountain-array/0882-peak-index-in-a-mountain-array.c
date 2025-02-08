int peakIndexInMountainArray(int* arr, int arrSize) {
    int max=arr[0];
    int res;
    for(int i=0;i<arrSize;++i){
        if(arr[i]>max){
            max=arr[i];
            res=i;
        }
    }
    return res;
}