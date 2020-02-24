//编写一个函数，使字符串s为空字符串。
#include<stdio.h>
void null_string(char s[]){
    
     while(s){
         *s=NULL;
         s++;

     }
    
}