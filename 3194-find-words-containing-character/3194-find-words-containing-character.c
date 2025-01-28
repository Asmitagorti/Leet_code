/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *arr=(int*)malloc(wordsSize*sizeof(int));
    int index=0;
    for(int i=0;i<wordsSize;i++){
        int flag=0;
        for(int j=0;words[i][j]!='\0';++j){
            if(words[i][j]==x){
                flag=1;
                break;
            }
        }
        if(flag) arr[index++]=i;
    }
    *returnSize=index;
    return arr;
}