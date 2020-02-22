//不使用下标运算符，编写如下函数，返回字符串s中字符c的个数（若不存在,则为0）。
int str_chnum(const char *s, int c) {  
    int count=0;
    while(*s){
        if(*s=='c')count++;
    s++;
    }
    return count;
}