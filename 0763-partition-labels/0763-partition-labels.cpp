class Solution {
public:
    vector<int> partitionLabels(string s) {
        int i=0,n=s.size(),furth=0;
        map<char,int>m,m1;
        vector<int>v,v1;
        for(int i=0;i<n;i++) m[s[i]]=i;
        while(i<n){
            bool flag=true;
            m1[s[i]]=i;
            if(i==m[s[i]]) {
                // for(auto i:m1) cout<<i.first<<" "<<i.second;
                for(auto j:m1){
                    char ch=j.first;
                    // cout<<j.second<<" "<<m[ch]<<" ";
                    if(j.second!=m[ch]) {
                        // cout<<j.second<<" ";
                        flag=false;
                        break;
                    }
                    // cout<<j.first<<" "<<j.second<<" ";
                }
                // cout<<endl;
                if(flag==true){
                    // m1.clear();
                    v.push_back(i+1);
                }
                // cout<<endl;
            }
            i++;
        }
        v1.push_back(v[0]);
        for(int i=1;i<v.size();i++) v1.push_back(v[i]-v[i-1]);
        return v1;
    }
};