//改写代码清单4-8的程序，当输入的值小于1时不输出换行符。

#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);
if(no>=1){
    while (no-- > 0)
        putchar('*');
    putchar('\n');
}
else
{
while (no-- > 0)
        putchar('*');
}
    return 0;
}