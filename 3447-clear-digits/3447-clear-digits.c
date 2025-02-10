char* clearDigits(char* s) {
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {

            while (j > 0 && ((s[j - 1] >= 'a' && s[j - 1] <= 'z') ||
                             (s[j - 1] >= 'A' && s[j - 1] <= 'Z'))) {
                j--;
                break;
            }
        } else {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    return s;
}
