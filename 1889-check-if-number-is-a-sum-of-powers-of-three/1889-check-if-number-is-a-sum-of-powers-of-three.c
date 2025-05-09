bool checkPowersOfThree(int n) {
    if(n<=0) return false;
    while(n>0){
        if(n%3==2) return false;
        n/=3;
    }
    return true;
    //1) 12%3==0, 12/=3 -> 4, 4%3==0, 4/=3-> 1, 
    //2) 91%3==1, 91/=3 -> 30, 30%3==0, 30/=3 -> 10, 10%3==1, 10/=3 -> 3, 3%3==0,
    // 3/=3 -> 1,
    //3) 21%3==0, 21/=3 -> 7, 7%3==1, 7/=3 -> 2
}