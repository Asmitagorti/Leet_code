class Solution {
public:


string toBinary(int n) {
        string res="";
        while(n>0){
            res=char('0'+(n%2))+res;
            n/=2;
        }
        return res==""?"0":res;
    }
    string convertDateToBinary(string date) {
        int year=(date[0]-'0')*1000+(date[1]-'0')*100+(date[2]-'0')*10+(date[3]-'0');
        int month=(date[5]-'0')*10+(date[6]-'0');
        int day=(date[8]-'0')*10+(date[9]-'0');
        return toBinary(year)+"-"+toBinary(month)+"-"+toBinary(day);
    }
    
};
