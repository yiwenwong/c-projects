//整数和浮点数

#include <stdio.h>

int main(void)
{
    int n;  
    double x;  

    n = 9.99; /* Warning */
    x = 9.99;

    printf("int   型变量n的值：%d\n", n);
    printf("n / 2：%d\n", n / 2);

    printf("double型变量x的值：%f\n", x);
    printf("x/2.0：%f\n", x / 2.0);

    return 0;
}