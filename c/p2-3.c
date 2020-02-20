//编写一段程序，像下面那样显示出读取的实数的值
#include<stdio.h>

int main(void)
{
    double n;
    printf("请输入一个实数：");scanf("%lf",&n);
    printf("你输入的是%.6f\n",n);
    return 0;
}