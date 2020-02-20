//创建一个程序，从键盘输入float型、double型、long double型的变量，并显示其值。注意试着输入各种各样的值，并验证其动作。
#include <stdio.h>

int main(void)
{
    float a;
    double b;      
    long double c;
    printf("float:");scanf("%f",&a);
    printf("double:");scanf("%lf",&b);
    printf("long double:");scanf("%Lf",&c);

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("c = %Lf\n", c);

    return 0;
}