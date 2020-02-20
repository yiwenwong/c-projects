//编写程序确认对无符号整数执行算术运算不会发生数据溢出。
#include<stdio.h>
 int main(void)
 {
     unsigned int x,y,z;
x = 37000;
y = 30000;
z = x + y;
printf("%u\n",z);
return 0;
 }