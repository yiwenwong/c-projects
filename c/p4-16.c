//编写一段程序，输入一个整数值，显示该整数值以下的所有奇数。
#include <stdio.h>

int main(void)
{
    int i, no;

    printf("整数值：");
    scanf("%d", &no);

    i = -1;
    while (i <= no)
        printf("%d ", i=i+2);
    printf("\n");

    return 0;
}