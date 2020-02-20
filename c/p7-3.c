//编写rrotate函数，返回无符号整数x右移n位后的值。
//编写lrotate函数，返回无符号整数x左移n位后的值。
#include<stdio.h>
 unsigned rrotate(unsigned x,int n)
 {
     return x>>n;
 }

unsigned lrotate(unsigned x,int n)
{
     return x<<n;
}



 int main(void)
 {
     int n;
     scanf("%d",&n);
     unsigned int after_shift1=rrotate(n,2);
      unsigned int after_shift2=lrotate(n,2);
     printf("%d\n",after_shift1);
     printf("%d\n",after_shift2);
     return 0;
 }