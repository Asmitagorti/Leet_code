class Solution {
public:
    string compressedString(string word) {
        int i=0,ct=0;
        string st;
        vector<pair<char,int>>v;
        while(i<word.length()){
            char ch=word[i];
            int j=i+1;
            ct=1;
            while(ch==word[j] && j<word.length()){
                ct++;
                j++;
            }
            v.push_back({ch,ct});
            i=j;
        }
        for(auto hii: v){
            ct=hii.second;
            while(ct>9){
                st+="9";
                st+=hii.first;
                ct-=9;
            }
            st+=to_string(ct)+hii.first;
            }
        return st;
    }

};