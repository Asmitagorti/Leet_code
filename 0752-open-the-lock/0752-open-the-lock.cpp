class Solution {
public:
    int openLock(vector<string>&ded, string tar) {
        // min steps --> bfs
        int ct=0,fin=0;
        set<string>s;
        queue<string>q;
        for(auto x :ded) s.insert(x);
        if(s.contains("0000")) return -1;
        if(tar=="0000") return 0;
        q.push("0000");
        s.insert("0000");
        fin++;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                string f=q.front();
                string f1=q.front();
                // cout<<"main "<<f<<endl;
                q.pop();
                for(int k=0;k<4;++k){
                    if(f[k]=='9') f[k]='0';
                    else f[k]+=1;
                    // cout<<"in+: "<<f<<endl;
                    if(!s.contains(f)){
                        q.push(f);
                        s.insert(f);
                        if(f==tar){
                            return ct+1;
                        }
                    }
                    f=f1;
                }
                for(int k=0;k<4;++k){
                    if(f[k]=='0') f[k]='9';
                    else f[k]-=1;
                    // cout<<"in-: "<<f<<endl;
                    if(!s.contains(f)){
                        q.push(f);
                        s.insert(f);
                        if(f==tar){
                            return ct+1;
                        }
                    }
                    f=f1;
                }
            }
            ct++;
        }
        return -1;
    }
    //maintain visited array,check validity of cells before pushing. 
};