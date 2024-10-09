char* toLowerCase(char* s) {
    for(int i=0;s[i]!=0;i++){   //字串的迴圈中間的「s[i]!=0」要記一下
        char c=s[i];
        if(isupper(c)) c=tolower(c);
        s[i]=c;
    }
    return s;
}