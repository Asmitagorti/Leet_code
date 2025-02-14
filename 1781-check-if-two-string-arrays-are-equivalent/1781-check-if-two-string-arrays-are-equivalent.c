bool arrayStringsAreEqual(char** word1, int word1Size, char** word2,
                          int word2Size) {
    char s1[10001] = "",s2[10001] = "";
    for (int i = 0; i < word1Size; i++) {
        strcat(s1, word1[i]);
    }
    for (int i = 0; i < word2Size; i++) {
        strcat(s2, word2[i]);
    }
    if (strcmp(s2, s1) == 0) return true;
    else return false;
}