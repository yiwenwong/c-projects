//编写一段程序，求1到n的和。n的值从键盘输入
#include <stdio.h>
int main(void)
{
     int i, no,sum=0;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    sum=sum+i;
        printf("%d ", sum);
    putchar('\n');

    return 0;
}