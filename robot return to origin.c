bool judgeCircle(char* moves) {
    int len=strlen(moves);
    int u=0;
    int d=0;
    int r=0;
    int l=0;
    for(int i=0;i<len;i++){
        if(moves[i]=='U'){
            u=u+1;
        }else if(moves[i]=='L'){
            l=l+1;
        }else if(moves[i]=='R'){
            r=r+1;
        }else if(moves[i]=='D'){
            d=d+1;
        }
    }
    if(u-d==0 && r-l==0){
        return true;
    }else{
        return false;
    }
    
}
