class Solution {
public:
    long long flowerGame(int n, int m) {
        // starts from 1
        // odd + even -> odd
        // fidn out how many odd numebrs are from 1->n, even from 1->n
        // find out how many odd numbers are from 1->m, even from 1->m
        // each even odd pair -> makes alice win

        long long x1 = (n/2); // even 
        long long x2 = n-x1;
        long long y1=(m/2); // evenn
        long long y2= m - y1;
        return ( x1*y2) + (x2*y1);
    }
};