bool isPalindrome(int x) {
    double pali=0;
    int rem;
    long temp=x;
    while(x>0){
        rem=x%10;
        pali=pali*10+rem;
        x=x/10;
    }
    if(pali==temp){
        return true;
    }
    else{
        return false;
    }
}
