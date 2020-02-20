//读取两个整数的值，然后显示出它们的和、差、积、商和余数

#include<stdio.h>

int main(void)
{
    int a;
    int b;
    printf("请输入两个整数：\n");
    printf("整数a："); scanf("%d",&a);
    printf("整数b："); scanf("%d",&b);
    printf("a+b=%d\n", a+b);
    printf("a-b=%d\n", a-b);
    printf("a*b=%d\n", a*b);
    printf("a/b=%d\n", a/b);
    printf("a%%b=%d\n", a%b);

    return 0;

    

}