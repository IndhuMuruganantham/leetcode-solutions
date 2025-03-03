int maximumWealth(int** accounts, int n, int* c) {
    int k=0;
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<c[i];j++){
            s=s+accounts[i][j];
        }
        if(k<s){
            k=s;
        }
        s=0;
    }

    return k;
}
