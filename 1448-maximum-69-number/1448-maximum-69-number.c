int count(int n) {
    int ct = 0;
    while (n != 0) {
        ct++;
        n /= 10;
    }
    return ct;
}

int maximum69Number(int num) {
    char str[100];  
    sprintf(str, "%d", num);
    
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '6') {
            str[i] = '9';
            break;
        }
    }

    return atoi(str);  
}