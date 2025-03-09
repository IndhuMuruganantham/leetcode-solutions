bool canAliceWin(int* nums, int n) {
    int s=0;
    int d=0;
    for(int i=0;i<n;i++){
        if(nums[i]<=9){
            s=s+nums[i];
        }else{
            d=d+nums[i];
        }
    }
    if(s-d==0){
        return false;
    }else{
        return true;
    }
}
