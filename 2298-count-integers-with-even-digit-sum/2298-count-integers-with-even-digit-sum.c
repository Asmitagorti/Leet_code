int digit_sum(int x){
    int sum=0;
    while(x>0){
        sum+=(x%10);
        x/=10;
    }
    return (sum%2==0);
}
int countEven(int num) {
    int ct=0;
    for(int i=2;i<=num;++i){
        if(digit_sum(i)){
            ct++;
        }
    }
    return ct;
}