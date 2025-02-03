int addDigits(int num) {
    int n=num;
    int s=0;
    int r=0;
    int j=0;
    while(n!=0)  {
    r=n%10;
    s=s+r;
    n=n/10;
  }
    if(s<10){
        return s;
    }
    else{
        return addDigits(s);
    }
}
