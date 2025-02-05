bool areAlmostEqual(char* s1, char* s2) {
    int dif[2] = {0};
    int ct = 0;
    for (int i = 0; s1[i] != '\0'; ++i) {
        if (s1[i] != s2[i]) {
            if (ct >= 2)
                return false;
            dif[ct++] = i;
        }
    }
    if (ct == 0)
        return true;
    return (ct == 2 && s1[dif[0]] == s2[dif[1]] && s1[dif[1]] == s2[dif[0]]);
}