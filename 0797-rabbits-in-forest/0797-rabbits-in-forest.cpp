class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n=answers.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;++i){
            freq[answers[i]]++;
        }
        int res=0;
        for(auto i:freq){
            int grp=i.first+1;
            while(i.second>grp){
                res+=grp;
                i.second-=grp;
            }
            if(i.second>0){
                res+=grp;
            }
        }
        return res;
    }
};