class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        // you dont need to give min(players)->max(trainers)
        // u can use bin search, to find the min greater element in trainers than players
        // and then we can remove that element from trainers
        int ct=0,i=0;
        sort(players.begin(),players.end());
        multiset<int>s(trainers.begin(), trainers.end());
        while(i<players.size()){
            auto it= s.lower_bound(players[i]);
            if(it!=s.end()) {
                s.erase(it);
                ct++;
            }
            i++;
        }
        return ct;
    }
};