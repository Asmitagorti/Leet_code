/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int n = strlen(boxes);
    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i) {
        arr[i] = 0; // initialise to 0, to avoid over-reading
        for (int j = 0; j < n; ++j) {
            if (boxes[j] == '1') {
                arr[i] += abs(j - i);
            }
        }
    }
    *returnSize = n;
    return arr;
}
