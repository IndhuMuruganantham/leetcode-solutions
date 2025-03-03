int subtractProductAndSum(int n) {
    int s=0;
    int r;
    int p=1;
    int d;
    while(n>0){
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    d=p-s;
    return d;
}
