int xorOperation(int n, int start) {
    int nums[n];
    int r=0;
    for(int i=0;i<n;i++){
        nums[i]=start+2*i;
    }
    for(int i=0;i<n;i++){
        r=r^nums[i];
    }
    return r;
}
