//使用本节中学习的库函数(strlen函数、strcpy函数、strncpy函数、strcat函数、strncat函数、strcmp函数、strncmp函数)编写程序。
#include<stdio.h>
#include<string.h>

int main(){
    char *m="123";
    char *n="456";
    printf("%d",strlen(m));
    strcpy(m,n);
    strncpy(m,n,7);
    strcat(m,n);
    strncat(m,n,7);
    strcmp(m,n);
    strncmp(m,n,7);
    return 0;
}