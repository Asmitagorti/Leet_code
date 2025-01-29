#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int countConsistentStrings(char* allowed, char** words, int wordsSize) {
    int allowedSet[26] = {0};  
    for (int i = 0; allowed[i] != '\0'; i++) {
        allowedSet[allowed[i] - 'a'] = true;
    }

    int count = 0;

    for (int i = 0; i < wordsSize; i++) {
        int isConsistent = 1;
        
        for (int j = 0; words[i][j] != '\0'; j++) {
            if (!allowedSet[words[i][j] - 'a']) {
                isConsistent = 0;
                break;
            }
        }
    
        if (isConsistent) count++;
    }

    return count;
}
