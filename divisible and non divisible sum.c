int differenceOfSums(int n, int m) {
    int d1=0;
    int d2=0;
    int d=0;
    for(int i=1;i<=n;i++){
        if(i%m==0){
            d1=d1+i;
        }else if(i%m!=0){
            d2=d2+i;
        }
    }
    d=d2-d1;
    return d;
}
