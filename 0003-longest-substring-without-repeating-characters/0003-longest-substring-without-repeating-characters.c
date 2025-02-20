int lengthOfLongestSubstring(char* s) {
    // sliding windows concept --> maintaining a specific size of a substring in a string, and then 'sliding' that window, across the length of the string
    // time complexity --> O(N)
    int left=0, right=0, max_length=0,freq[256]={0};//
    int len=strlen(s), cur = 0;
    if(len==0) return 0;
    while(right<len){
        freq[s[right]]++;
        while(freq[s[right]]>1){
            freq[s[left]]--;
            left++;
        }
        cur=right-left+1; // find the current length
        if(cur>max_length){
            max_length=cur;
        }
        right++;
    }
    return max_length;
}