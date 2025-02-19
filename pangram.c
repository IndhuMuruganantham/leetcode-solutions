bool checkIfPangram(char* s) {
    int n[26]={0};

    int len = strlen(s);

    for(int i=0;i<len;i++)
    {
        n[(int)s[i] - 'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(n[i]==0)
        {
            return 0;
        }
    }
    return 1;
}
