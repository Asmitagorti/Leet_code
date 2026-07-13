class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        string fin="89";
        int val=low;
        int r=ceil(low);
        bool flag=false;
        string s1=to_string(low),s2="";
        vector<int>v,res;
        int i=0,j=s1.size();
        while(j<11){
            s2=s.substr(i,j);
            // cout<<s3<<endl;
            if(i+j>=10){
                j++;
                i=0;
                continue;
            }
            val=stoi(s2);
            if(val>=0 && val<=high) v.push_back(val);
            i++;
        }
        for(auto i:v){
            if(i>=low) res.push_back(i);
        }
        return res;
    }
};