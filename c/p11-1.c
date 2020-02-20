//将代码清单11-3中对p的赋值进行如下修改。
#include <stdio.h>

int main(void)
{
    char *p = "123";
    printf("p = \"%s\"\n", p);
    p = "456"+1; 
    printf("p = \"%s\"\n", p);
    return 0;
}