class Solution {
public:
    int trailingZeroes(int n) {
        // when u get a number, to check if has trailing zeroes, we can start with
        // no of 10's == no. of trailing zeroes
        // this wont work, as we'd have to calculate the value of n!, which is too big
        // so we start with 10, it can be written as 10 = 2*5
        // when writing the no of 2's and 5's in a number, we can say that
        // the least freq of 2,5 is the no. of trailing zeroes
        // but we need factorial
        // in factorial, the ( no. of 2's)> ( no of 5's)
        // 5! : 1(5)
        // 10! : 2(5)
        // 25! : 5(5)+1(5) ... the extra 5, is cuz 25 itself has two 5 factors
        int sum=0;
        while(n!=0){
            n/=5;
            sum+=n;
        }
        return sum;
    }
};