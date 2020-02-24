//编写如下函数，将字符串s中的数字字符全部删除。
#include<stdio.h>
void del_digit(char s[]){
    while(s){
        if(*s>=0&&*s<=9)*s=NULL;
        s++;
    }
}