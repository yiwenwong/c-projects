//编写一段程序，对代码清单4-15进行修改，在显示所输入的整数值的所有约数之后，显示约数的个数。
#include <stdio.h>

int main(void)
{
    int i , n,count=0;

    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i ++) {
        if (n % i == 0)
            printf("%d\n", i);
            count++;
    }
    printf("约数有%d个。", count);
    putchar('\n');

    return 0;
}