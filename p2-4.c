//编写程序对整型常量、浮点型常量、int型变量和double型变量进行乘除等各种运算，从而验证本节介绍的规则。

#include <stdio.h>

int main(void)
{
    int    n;   
    double x;  

    n = 9;  
    x = 9.99;
    printf("n为整型变量，x为浮点型变量\n");
    printf("n / 2：%d\n", n / 2);
    printf("n / 2.0：%d\n", n / 2.0);
    printf("x/2：%f\n", x / 2);
    printf("x/2.0：%f\n", x / 2.0);
    return 0;
}