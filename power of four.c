bool isPowerOfFour(int n) {
    while(n>0){
        if(n%4==0){
            n=n/4;

        }
        else{
            break;
        }
    }
    if(n==1){
        return true;
    }
    else{
        return false;
    }
}
