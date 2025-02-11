char* removeOccurrences(char* s, char* part) {
    int len_s = strlen(s);
    int len_part = strlen(part);
    
    int j = 0;  
    for (int i = 0; i < len_s; i++) {
        s[j++] = s[i];  

        if (j >= len_part && strncmp(s + j - len_part, part, len_part) == 0) {
            j -= len_part;  
        }
    }
    s[j] = '\0';
    return s;
}
