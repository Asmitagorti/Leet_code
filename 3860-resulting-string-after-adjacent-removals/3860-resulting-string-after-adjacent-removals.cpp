class Solution {
public:
    string resultingString(string s) {
        //use stack
        //s consists only of lowercase English letters.
        stack<char>hi;
        char pup;
        for(char i: s){
            if(!hi.empty()){
                pup=hi.top();
                if((abs(pup-i)==1)||(i=='a' && pup=='z') || (i=='z' && pup=='a')){
                    hi.pop();
                    continue;
                }
                else hi.push(i);
            }
            else hi.push(i);
        }
        string fin;
        int indx=0;
        while(!hi.empty()){
            char kitty=hi.top();
            fin+=kitty;
            hi.pop();
        }
        // i need to reverse fin and then return it
        string res;
        int n=fin.length();
        for(int i=n-1;i>=0;--i){
            res+=fin[i];
        }
        return res;
    }
};