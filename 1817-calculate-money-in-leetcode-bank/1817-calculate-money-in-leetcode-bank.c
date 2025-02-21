int totalMoney(int n) {
    int week=n/7;
    int day=n%7;
    int sum=0;
    for(int i=0;i<week;++i){
        sum+=7*(4+i);
    }
    int z=week+1;
    for(int i=0;i<day;++i){
        sum+=z+i;
    }
    return sum;
}