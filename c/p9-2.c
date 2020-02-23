//如何让下述初始化賦值得到的字符串s变成空字符串?请编写程序实现。
#include <stdio.h>

int main(void)
{int i=0;
    char s[]="ABC";
    while(s){
        s[i]=NULL;
        i++;
    }
    return 0;
}