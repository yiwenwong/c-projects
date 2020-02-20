//编写一段程序，像下面这样显示读取到的三个整数的和。

#include<stdio.h>

int main(void)
{
    int n1,n2,n3;
    int sum;
    puts("请输入两个整数");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    printf("整数3:"); scanf("%d", &n3);
    sum=n1+n2+n3;
    printf("它们的乘积是%d。\n",sum);
    return 0;
    
   
}