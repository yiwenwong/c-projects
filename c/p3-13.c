//对代码清单3-17中的程序进行修改，不使用if语句，而是改用switch语句来实现。
#include <stdio.h>

int main(void)
{
    int month;

    printf("请输入月份：");
    scanf("%d", &month);

    switch(month)
    {
        case 3: case 4: case 5:
        printf("%d月是春季。\n", month);
        break;
     case 6: case 7: case 8:
        printf("%d月是夏季。\n", month);
        break;
     case 9: case 10: case 11:
        printf("%d月是秋季。\n", month);
        break;
    case 12: case 1: case 2:
        printf("%d月是冬季。\n", month);
        break;
    default:
        printf("%d月不存在。！！\n", month);
    }
    return 0;
}