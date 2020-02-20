//创建一个程序，使用sizeof运算符显示3种浮点型的长度。
#include <stdio.h>

int main(void)
{
    float a;
    double b;      
    long double c;
    printf("float:");scanf("%f",&a);
    printf("double:");scanf("%lf",&b);
    printf("long double:");scanf("%Lf",&c);

    printf("a = %u\n",sizeof a);
    printf("b = %u\n",sizeof b);
    printf("c = %u\n",sizeof c);

    return 0;
}