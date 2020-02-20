//对读取的整数值进行符号取反操作，并输出结果
#include <stdio.h>

int main(void)
{
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("符号取反之后的值是%d。\n",-n);
    return 0;
}