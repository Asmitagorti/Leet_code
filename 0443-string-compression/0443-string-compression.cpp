class Solution {
public:
    int compress(vector<char>& chars) {
        int ind=0;
        int i=0;
        while(i<chars.size()){
            int ct=1;
            char ch=chars[i];
            int j=i+1;
            while(j<chars.size() && ch==chars[j]){
                ct++;
                j++;
            }
            chars[ind++]=ch;
            if(ct>1){
                string num=to_string(ct);
                for(auto hi:num){ // hii
                    chars[ind++]=hi; // count each digit as a length
                }
            }
            i=j;
        }
        return ind;
    }
};