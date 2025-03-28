class Solution {
public:
    string binary(int n) {
        string s = "";
        while (n > 0) {
            s.push_back((n % 2) + '0');
            n /= 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }

    vector<int> evenOddBit(int n) {
        string binStr = binary(n);
        int len = binStr.length(); // this is new!!
        int even = 0, odd = 0;

        for (int i = 0; i < len; ++i) {
            if (binStr[i] == '1') {
                int bitIndex = (len- 1) - i;
                if (bitIndex % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        return {even, odd};
    }
};
