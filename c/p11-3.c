//改写代码清单11-6的程序，将本文中学习的str_copy函数的调用作为printf函数的实参。

#include<stdio.h>
char* str_copy(const char *s)
{
    char *t ;
    while (*t++ = *s++)
        ;
    return t;
}

int main(void)
{
     
    char tmp[128];
     

    printf("复制的是：");
    scanf("%s", tmp);

    

    puts("复制了。");
    printf("str = \"%s\"\n",str_copy(tmp));

    return 0;
}