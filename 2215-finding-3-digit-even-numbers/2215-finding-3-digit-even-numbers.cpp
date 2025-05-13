class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        //
        int n = digits.size();
        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            freq[digits[i]]++;
        }
        vector<int> hi;
        for (int i = 100; i <= 999; ++i) {
            map<int, int> pup;
            // u need to check if the freq of the digits
            // in this number <=overall freq 
            int a = i / 100, b = (i / 10) % 10, c = i % 10;
            if(c%2==1) continue;
            pup[a]++, pup[b]++, pup[c]++;
            int flag=1;
            for(auto me:pup) {
                if(me.second>freq[me.first]){
                    flag=0;
                    break;
                }
            }
            if(flag) hi.push_back(i);
        }
        return hi;
    }
};