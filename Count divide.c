int countDigits(int num) {
    int s=0;
    int r=0;
    int m;
    int c=0;
    m=num;
    while(num>0){
        r=num%10;
        if(r!=0 && m%r==0){
            c=c+1;
        }
        num=num/10;
    }
    return c;
}
