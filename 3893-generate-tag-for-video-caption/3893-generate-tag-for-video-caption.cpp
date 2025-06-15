class Solution {
public:
    string generateTag(string caption) {
        string res = "#";
        for (int i=0;i<caption.size();++i) {
            if(!isalpha(caption[i])) continue;
            if(res.size()==1) res+=tolower(caption[i]);
            else if (caption[i-1]==' ') {
                res+=toupper(caption[i]);
            }
            // else if(caption[i]==' '){
            //     continue;
            // }
            else {
                res+=tolower(caption[i]);
            }
            if(res.size()==100) break;
        }
        return res;
    }
};
