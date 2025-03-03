int arraySign(int* nums, int n) {
    int p=1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            return 0;
        }
        else if(nums[i]<0){
            p=-p;
        }
    }
     return p;

}
