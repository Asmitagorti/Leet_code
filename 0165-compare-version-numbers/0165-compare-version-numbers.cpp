class Solution {
public:
    int compareVersion(string version1, string version2) {
        // convert the string into a complete number
        // and then compare
        string s1,s2;
        int n1=0,n2=0;
        
        vector<int>v1;
        vector<int>v2;

        // if(version1.size()>version2.size()){
        //     vector<int>v1;
        //     vector<int>v2(version1.size(),0);
        // }
        // else {
        //     vector<int>v1(version2.size(),0);
        //     vector<int>v2();
        // }
        // vector<int>v1, v2;
        for(int i=0;i<version1.size();++i){
            if(version1[i]=='.'){
                n1=stoi(s1);
                // cout<<n1<<" ";
                v1.push_back(n1);
                s1="";
            }
            else {
                s1+=version1[i];
            }
        }
        if (!s1.empty()) v1.push_back(stoi(s1));
        for(int i=0;i<version2.size();++i){
            if(version2[i]=='.'){
                n2=stoi(s2);
                // cout<<n1<<" ";
                v2.push_back(n2);
                s2="";
            }
            else {
                s2+=version2[i];
            }
        }
        if (!s2.empty()) v2.push_back(stoi(s2));

        // cout<<"array v1"<<endl;
        // for(int i=0;i<v1.size();++i){
        //     cout<<v1[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"array v2"<<endl;
        // for(int i=0;i<v2.size();++i){
        //     cout<<v2[i]<<" ";
        // }
        int n = max(v1.size(), v2.size());
        v1.resize(n, 0);
        v2.resize(n, 0);
        
        for(int i=0;i<v1.size();++i){
            if(v1[i]>v2[i]){
                return 1;
            }
            else if(v1[i]<v2[i]){
                return -1;
            }
        }
        return 0;
    }
};