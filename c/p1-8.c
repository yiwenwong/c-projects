//编写一段程序，像下面这样显示读取到的两个整数的乘积。
#include<stdio.h>

int main(void)
{
    int n1,n2;
    int pro;
    puts("请输入两个整数");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    pro=n1*n2;
    printf("它们的乘积是%d。\n",pro);
    return 0;
    
   
}