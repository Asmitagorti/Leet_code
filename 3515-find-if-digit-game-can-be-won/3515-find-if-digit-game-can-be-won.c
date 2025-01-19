bool canAliceWin(int* nums, int numsSize) {
    int sum = 0;
    int single = 0, doub = 0;
    for (int i = 0; i < numsSize; ++i) {
        if(nums[i]>=10 && nums[i]<=99){
            doub+=nums[i];
        }
        else single+=nums[i];
    }
    int alice_s=single;
    int bob_d=doub;
    int alice_d=doub;
    int bob_s=single;
    return (alice_s>bob_d) || (alice_d>bob_s);
}