int mySqrt(int x) {
    long temp=x;
    //int s=x;
    long i;
    long f;
    for(i=0;i<=temp;i++){
        if((i*i)==temp){
            f=i;
            break;
        }
        else if((i*i)>temp){
            f=i-1;
            break;
        }
    }
    return f;
}
