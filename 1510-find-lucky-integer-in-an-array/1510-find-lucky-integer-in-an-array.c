int findLucky(int* arr, int arrSize) {
    int freq[1000000]={0};
    for(int i=0;i<arrSize;++i){
        freq[arr[i]]++;
    }
    int max=INT_MIN;
    for(int i=0;i<arrSize-1;++i){
        if(freq[arr[i]]==arr[i]){
            if(arr[i]>max) max=arr[i];
        }
    }
    if(max>0) return max;
    else return -1;
}