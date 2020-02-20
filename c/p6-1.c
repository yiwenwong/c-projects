//创建一个函数，返回两个int型整数中较小一数的值。
#include<stdio.h>
int min2(int a, int b)
{
    int min = a;

    if (b <min) min = b;
    

    return min;
}

int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    printf("整数a:"); scanf("%d", &a);
    printf("整数b:"); scanf("%d", &b);
     

    printf("最小的值是%d。\n", min2(a, b));

    return 0;
}