int is_vowel(char ch) {
    ch = tolower(ch);  
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

char* reverseVowels(char* s) {
    int len = strlen(s);
    char vowel[len]; 
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (is_vowel(s[i])) vowel[index++] = s[i];
    }
    index--;
    for (int i = 0; i < len; i++) {
        if (is_vowel(s[i])) s[i] = vowel[index--]; 
    }
    
    return s;
}
