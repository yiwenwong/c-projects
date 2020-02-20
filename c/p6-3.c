//创建一个函数，返回int型整数的立方。
#include <stdio.h>

 
int cube(int x)
{
    return x * x * x;
}

 
int main(void)
{
    int x;

    puts("请输入一个整数。");
    printf("整数x:"); scanf("%d", &x);

    printf("x的立方是%d。\n", cube(x));

    return 0;
}