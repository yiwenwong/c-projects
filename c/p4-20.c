//编写一段程序，为九九乘法表增加横纵标题。
#include <stdio.h>

int main(void)
{
    int i , j;
printf("     1  2  3  4  5  6  7  8  9\n");
    for (i = 1; i <= 9; i ++) {
        printf("%3d", i);
        for (j = 1; j <= 9; j++)
            printf("%3d", i * j);
        putchar('\n');
    }

    return 0;
}