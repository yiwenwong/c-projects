//编写一段程序输入两个整数，如果它们的差值小于等于10,则显示“它们的差小于等于10”。否则，显示“它们的差大于等于11”。

//请使用逻辑或运算符。
#include <stdio.h>
 
int main(void)
{
    int n1, n2;

    puts("请输入两个整数：");
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
if( (n1-n2)<=10||(n2-n1)<=10)
printf("它们的差小于等于10");
else 
printf("它们的差大于等于11");
return 0;
}