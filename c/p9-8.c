//编写如下函数，实现字符串的逆向输出。
void put_stringr(const char s[]){
    while(s)s++;
    s--;
    while(s){
        printf("%d",*s);
        s--;
    }
}