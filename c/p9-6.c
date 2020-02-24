//编写如下函数，返回字符串s中字符c的个数(没有则返回0)。
int str_chnum(const char s[],int c){
    int count=0;
    while(s){
        if(*s=='c')
        count++;
        s++;
    }
    if(count)
    return count;
    else return 0;
}