/*
输入5名学生的分数并显示出他们的总分和平均分
*/
#include <stdio.h>

int main(void)
{
    int no1;
    int no2;
    int no3;
    int no4;
    int no5;
    int sum = 0;

    printf("请输入5名学生的分数。\n");
    printf("1号："); scanf("%d", &no1); sum += no1;
    printf("2号："); scanf("%d", &no2); sum += no2;
    printf("3号："); scanf("%d", &no3); sum += no3;
    printf("4号："); scanf("%d", &no4); sum += no4;
    printf("5号："); scanf("%d", &no5); sum += no5;

    printf("总分：%5d\n", sum);
    printf("平均分：%5.1f\n", (double)sum / 5);

    return 0;
}