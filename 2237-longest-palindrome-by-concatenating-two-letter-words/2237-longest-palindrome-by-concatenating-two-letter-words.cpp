class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        // not possible : return 0
        // 26^2 == 676 -> possibilities
        // or u can do 2 sweeps, left -> right, and then right -> left (completely)
        map<string, int> bob;
        for (string pup : words) {
            // cases for ab==ab, remove
            bob[pup]++;
        }
        int ct = 0, flag = 0;
        for (auto hi : bob) {
            string simba = hi.first;
            string rev = simba;
            reverse(rev.begin(), rev.end());
            int freq = hi.second;
            if (simba == rev) {
                ct += 4*(freq/2);
                if (freq % 2 == 1 && flag == 0) {
                    // if there's an unpaired one and we haven't used center yet
                    flag = 1;
                    ct += 2;
                }
            }
            else if (bob[rev] > 0) {
                // for cases like cl lc, pair
                // we can form a palindrome using these
                // so we take the min, cuz if cl ->3, lc->2 times
                // we only take 2, cuz we're forming a palindrome
                int m = min(freq, bob[rev]);
                ct += m * 4;
                bob[rev] = 0; 
                bob[simba] = 0;
            }
        }
        return ct;
    }
};
