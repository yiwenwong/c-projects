//创建一个程序,显示如下所示的各表达式的值，同时对各表达式的值加以说明。
#include <stdio.h>

int main(void)
{
    int n;

    printf("sizeof 1      = %u\n", sizeof 1);
    printf("sizeof +1       = %u\n", sizeof +1);
    printf("sizeof -1          = %u\n", sizeof -1);
    printf("sizeof(unsigned)-1   = %u\n", sizeof(unsigned)-1 );
    printf("sizeof(double)-1      = %u\n", sizeof(double)-1 );
    printf("sizeof((double)-1)      = %u\n", sizeof((double)-1));
    printf("sizeof n+2      = %u\n", sizeof n+2);
    printf("sizeof(n+2)     = %u\n", sizeof(n+2));
    printf("sizeof(n+2.0)    = %u\n", sizeof(n+2.0));
    return 0;
}