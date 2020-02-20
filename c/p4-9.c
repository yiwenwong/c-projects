//编写一段程序，使之交替显示+和-，总个数等于所输入的整数值。另外，当输入0以下的整数时，则什么也不显示。

#include <stdio.h>

int main(void) {
    int n, count=0,i;
    char a[2] = {'+','-'};
    puts("请输入一个整数：");
    scanf("%d", &n);

    for (i = 0; count < n; i++)

    {
        printf("%c", a[i]);
        if(i==1){i=-1;}
        count++;
    }
printf("\n");
    return 0;
}