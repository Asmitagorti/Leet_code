int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int ct=0;
    for(int i=0;i<hoursSize;++i){
        if(hours[i]>=target) ct++;
    }
    return ct;
}