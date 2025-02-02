int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int* C = (int*)malloc(ASize * sizeof(int));

    int seenA[10001] = {0};  
    int seenB[10001] = {0};  

    for (int i = 0; i < ASize; ++i) {
        seenA[A[i]] = 1;
        seenB[B[i]] = 1;
        int c = 0;
        for (int j = 0; j <= i; ++j) {
            if (seenA[A[j]] && seenB[A[j]]) {
                c++;
            }
        }

        C[i] = c;
    }
    *returnSize = ASize;
    return C;
}

