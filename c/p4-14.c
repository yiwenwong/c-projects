//编写一段程序，根据输入的整数，循环显示1234567890，显示的位数和输入的整数值相同。

#include <stdio.h>

int main(void) {
    int n, count=0,i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    puts("请输入一个整数：");
    scanf("%d", &n);

    for (i = 0; count < n; i++)

    {
        printf("%d", a[i]);
        if(i==9){i=-1;}
        count++;
    }
printf("\n");
    return 0;
}