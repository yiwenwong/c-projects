//编写一段程序，输入一个整数值，显示出它的绝对值。
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a;
     

    puts("请输入一个整数。");
      scanf("%d", &a);
    printf("它的绝对值是%d\n",fabs(a));
     
    return 0;
}