//编写一段程序，显示1到n的整数值的二次方。
#include <stdio.h>

int main(void)
{
    int i, no;

    printf("整数值：");
    scanf("%d", &no);

    i =1;
    while (i <= no)
    {
        printf("%d的二次方是%d ", i,i*i);
        i++;
    }
    printf("\n");

    return 0;
}