int missingNumber(int* nums, int numsSize) {
    int s=0;
    int a=0;
    for(int i=0;i<numsSize;i++){
        s=s+nums[i];
    }
    for(int i=1;i<=numsSize;i++){
        a=a+i;
    }
    int r=a-s;
    return r;
}
