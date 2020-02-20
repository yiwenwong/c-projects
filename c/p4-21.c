//编写一段程序，显示以所输入整数为边长的正方形。
#include <stdio.h>

int main(void)
{
    int i , j;
    int side;

    puts("让我们来画一个正方形。");
    printf("边长："); scanf("%d", &side);

    for (i = 1; i <= side; i ++) {
        for (j = 1; j <= side; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}