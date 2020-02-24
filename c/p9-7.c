//编写如下函数，使字符串s显示n次。
#include<stdio.h>
void put_stringn(const char s[],int n){
    int i,j=0;
    for(i=0;i<n;i++){
        while(s){
            printf("%d",s[j]);
            j++;
        }
    }
}