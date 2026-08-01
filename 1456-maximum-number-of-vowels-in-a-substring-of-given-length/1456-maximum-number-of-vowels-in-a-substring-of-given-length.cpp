class Solution {
public:
    bool vow(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    int maxVowels(string s, int k) {
        int ct=0;
        for(int i=0;i<k;++i){
            if(vow(s[i])) ct++;
        }
        int maxi=ct;
        int i=0;
        for(int j=k;j<s.size();++j){
            if(vow(s[j])) {
                ct++;
            }
            if(vow(s[i])) ct--;
            maxi=max(maxi,ct);
            i++;
        }
        return maxi;
    }
};