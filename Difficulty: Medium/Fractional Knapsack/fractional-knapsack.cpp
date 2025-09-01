class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity){
        vector<pair<double,double>>hi;
        for(int i=0;i<val.size();++i){
            hi.push_back({val[i],wt[i]});
        }
        sort(hi.begin(),hi.end(),[](const pair<double,double>&a, const pair<double,double>&b)
        {
            double p1 = ((double)a.first/(double)a.second)*1.0;
            double p2 = ((double)b.first/(double)b.second)*1.0;
            return p1>p2;
        });
        // (val, wt)
        double ct=0.0;
        for(int i=0;i<val.size();++i){
            if(capacity>hi[i].second){
                ct+=hi[i].first;
                capacity-=hi[i].second;
            }
            else {
                // cout<<"hiii"<<endl;
                ct+=((double)(hi[i].first/(double)hi[i].second*1.0)*capacity);
                capacity=0;
                break;
            }
            // else break
        }
        return ct;
    }
};
