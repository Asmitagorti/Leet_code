class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size(),flag=0,res=0;
        map<int, int> freq1;
        map<int, int> freq2;
        for (auto i : tops) {
            freq1[i]++;
        }
        int max1 = -1, no1 = 0;
        for (auto i : freq1) {
            if (i.second > max1) {
                max1 = i.second;
                no1 = i.first;
            }
        }
        for (auto i : bottoms) {
            freq2[i]++;
        }
        int max2 = -1, no2 = 0;
        for (auto i : freq2) {
            if (i.second > max2) {
                max2 = i.second;
                no2 = i.first;
            }
        }
        // u know have the max repeated element in BOTH arrays
        if (max1 > max2) {
            int ct1=0;
            for (int j = 0; j < n; ++j) {
                if (tops[j]!=bottoms[j] && bottoms[j] == no1) {
                    ct1++;
                }
            }
            if (ct1 + max1 == n) {
                res=ct1;
                flag=1;
            }
        } else {
            int ct2=0;
            for (int j = 0; j < n; ++j) {
                if (tops[j]!=bottoms[j] && tops[j] == no2) {
                    ct2++;
                }
            }
            if (ct2 + max2 == n) {
                res=ct2;
                flag=1;
            }
        }
        if(flag==1) return res;
        else return -1;
    }
};