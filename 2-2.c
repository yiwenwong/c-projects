//显示读取出的整数的最后一位数字

#include <stdio.h>

int main(void)
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("最后一位是：%d。\n", n%10);
    return 0;
}