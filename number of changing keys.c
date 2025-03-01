int countKeyChanges(char* s) {
    int c=0;
    int l=strlen(s);
    for(int i=0;i<l-1;i++){
        if(toupper(s[i])!=toupper(s[i+1])){
            c=c+1;
        }
    }
    return c;
}
