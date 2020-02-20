//创建一个函数，返回三个int型整数中的最小值。
#include <stdio.h>

 
int min3(int a, int b, int c)
{
    int min = a;

    if (b < min) min = b;
    if (c < min) min = c;

    return min;
}

int main(void)
{
    int a, b, c;

    puts("请输入三个整数。");
    printf("整数a:"); scanf("%d", &a);
    printf("整数b:"); scanf("%d", &b);
    printf("整数c:"); scanf("%d", &c);

    printf("最大的值是%d。\n", min3(a, b, c));

    return 0;
}