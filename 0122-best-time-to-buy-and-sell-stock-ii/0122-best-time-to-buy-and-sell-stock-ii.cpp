class Solution {
public:
    int maxProfit(vector<int>& p) {
       int sum=0;
       for(int i=0;i<p.size()-1;i++){
        if(p[i]<p[i+1]) sum+=(p[i+1]-p[i]);
       }
       return sum;
    }
};