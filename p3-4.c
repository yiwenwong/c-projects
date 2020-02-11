//编写一段程序，输入两个整数，如果两数值相等，则显示“A和B相等。”。如果A大于B,则显示“A大于B。”。如果A小于B,则显示“A小于B。”。
#include<stdio.h>

int main(void)
{
     int a, b;
    puts("请输入两个整数。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);
     
     if (a<b)
     {
        printf("A小于B");
     }
     else if (a==b)
     {
        printf("A和B相等");
     }
     
     else if (a>b)
     {
        printf("A大于B");
     }
    return 0;
}