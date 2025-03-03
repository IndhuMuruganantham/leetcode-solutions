bool threeConsecutiveOdds(int* arr, int n) {
    bool ifvalid=false;
    for(int i=0;i<n-2;i++){
        if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
            ifvalid=true;
            break;
        }
    }
    return ifvalid;
}
