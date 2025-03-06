/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize,int* returnSize) {
    int* freq = (int*)calloc(gridSize * gridSize + 1, sizeof(int));
    int* brr = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < gridSize; ++i) {
        for (int j = 0; j < gridColSize[i]; ++j) {
            freq[grid[i][j]]++;
        }
    }
    for (int i = 1; i <= gridSize * gridSize; ++i) {
        if (freq[i] == 2)
            brr[0] = i;
        else if (freq[i] == 0)
            brr[1] = i;
    }
    *returnSize = 2;
    return brr;
}
