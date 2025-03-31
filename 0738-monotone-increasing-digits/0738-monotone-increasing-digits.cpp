#include <stack>
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        stack<int>arr;
        while(n>0){
            arr.push(n%10);
            n/=10;
        }
        vector<int>st;
        while(!arr.empty()){
            st.push_back(arr.top());
            arr.pop();
        }
        int j= st.size(),len=st.size();
        for(int i=len-1;i>0;--i){
            if(st[i-1]>st[i]){
                st[i-1]--;
                j=i;
            }
        }
        for(int k=j;k<len;++k){
            st[k]=9;
        }
        int sum=0;
        for(int i:st){
            sum=(sum*10)+i;
        }
        return sum;
    }
};