/*
表示日期的结构体和表示人的结构体
*/
#include <stdio.h>

#define NAME_LEN 128  /*姓名的字符数*/

/*表示日期的结构体*/
struct Date {
    int y;  /*年*/
    int m;  /*月*/
    int d;  /*日*/
};

/*表示人的结构体*/
typedef struct {
    char name[NAME_LEN];  /*姓名*/
    struct Date birthday; /*生日*/
} Human;

/*显示指针h所指向的人的姓名和生日*/
void print_Human(const Human *h)
{
    printf("%s  （%04d 年 %02d 月 %02d 日生）\n",
           h->name, h->birthday.y, h->birthday.m, h->birthday.d);
}

int main(void)
{
    int i;
    struct Date today; /*今天的日期*/

    Human member[] = {
        {"张三", {1904, 11, 18}},
        {"李四", {1963, 11, 18}},
        {"王五", {1980, 11, 18}},
    };

    printf("请输入今天的日期。\n");
    printf("年："); scanf("%d", &today.y);
    printf("月："); scanf("%d", &today.m);
    printf("日："); scanf("%d", &today.d);

    printf("今天是%d年%d月%d日。\n", today.y, today.m, today.d);

    printf("---会员一览表---\n");

    for (i = 0; i < sizeof(member) / sizeof(member[0]); i++)
        print_Human(&member[i]);

    return 0;
}