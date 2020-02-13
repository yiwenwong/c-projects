//创建一个函数，返回1到n之间所有整数的和。
#include <stdio.h>

int sumup(int n)
{
    int i,sum=0;
    for (i = 1; i <= n; i++)
    sum=sum+i;
        printf("%d ", sum);
    putchar('\n');

}

int main(void)
{
     int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    sumup(no);
    return 0;
}