//编写一段程序，读取两个整数，然后显示出前者是后者的百分之几。
#include<stdio.h>

int main(void)
{
     int a, b;
    puts("请输入两个整数。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);
    printf("a是b的百分之%f。\n", a/b*100);
    return 0;
}