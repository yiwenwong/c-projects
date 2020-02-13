/*
计算最高分
*/
#include <stdio.h>

#define NUMBER 5 /*学生人数*/

int tensu[NUMBER]; /*数组定义【1】*/

int top(void); /*函数top的函数原型声明【2】*/

int main(void)
{
    extern int tensu[]; /*数组的声明（可以省略）【3】*/
    int i;

    printf("请输入%d名学生的分数\n", NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("%d:", i + 1);
        scanf("%d", &tensu[i]);
    }

    printf("最高分=%d\n", top());

    return 0;
}

/*返回数组tensu的最大值*/
int top(void)
{
    extern int tensu[]; /*数组的声明（可以省略）【4】*/
    int i;
    int max = tensu[0];

    for (i = 1; i < NUMBER; i++)
        if (tensu[i] > max)
            max = tensu[i];

    return max;
}