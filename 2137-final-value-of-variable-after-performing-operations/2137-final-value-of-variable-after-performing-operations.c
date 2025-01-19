int finalValueAfterOperations(char** operations, int operationsSize) {
    int value = 0;
    for (int i = 0; i < operationsSize; ++i) {
        if ((strcmp(operations[i], "X++") == 0) ||
            (strcmp(operations[i], "++X") == 0)) {
            value++;
        }
        if ((strcmp(operations[i], "X--") == 0) ||
            (strcmp(operations[i], "--X") == 0)) {
            value--;
        }
    }
    return value;
}