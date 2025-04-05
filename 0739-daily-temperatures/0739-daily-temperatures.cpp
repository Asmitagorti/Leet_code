class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>arr(n);
        stack<int>st;
        for(int i=0;i<n;++i){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int prev=st.top();
                st.pop();
                arr[prev]=i-prev;
            }
            st.push(i);
        }
        return arr;
    }
};