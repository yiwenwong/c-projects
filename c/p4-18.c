//编写一段程序，输入一个整数值，显示该整数个'*'。每显示5个就进行换行。
#include <stdio.h>

int main(void) {
    int n, i,count=0;
    puts("请输入一个整数：");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf( "*");
        count++;
        if(count=5)
    {
        printf("\n");
        count=0;
    }
        
    }
    return 0;
}