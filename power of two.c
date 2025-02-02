bool isPowerOfTwo(int n) {
    //int r=0;
    while(n>0){
        {
            if(n%2==0){
                n=n/2;
            }
            else{
                break;
            }
        }
        
    }
    if(n==1){
        return true;
    }
    else{
        return false;
    }
}
