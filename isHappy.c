bool isHappy(int n) {
    int s=0;
    while(n>=1){
        int r = n%10;
        s=s+(r*r);
        n=n/10;
    }
    if(s==1 || s==7){
        return true;
    }
    else if(s<10){
        return false;
    }
    else{
        return isHappy(s);
    }
}
