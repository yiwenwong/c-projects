//不使用下标运算符，实现代码清单9-11的str_toupper函数和str_totower函数。
#include <stdio.h>
#include <ctype.h>

/*将字符串中的英文字符转为大写字母*/
void str_toupper(char *s)
{
    
    while (*s) {
        *s = toupper(*s);
        s++;
    }
}

/*将字符串中的英文字符转为小写字母*/
void str_tolower(char *s)
{
     
    while (*s) {
        *s = tolower(*s);
        s++;
    }
}

int main(void)
{
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    str_toupper(str);
    printf("大写字母：%s\n", str);

    str_tolower(str);
    printf("小写字母：%s\n", str);

    return 0;
}