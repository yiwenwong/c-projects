//在代码清单12-3的基础上，编写显示对象takao各成员地址的程序。
#include <stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];   
    int height;            
    float weight;          
    long schols;           
};

int main(void)
{
    int *p;

    struct student takao = {"Takao", 173, 86.2};
    p=&takao;
    printf("姓名 = %s 地址为%p\n", takao.name,p++);
    printf("身高 = %d 地址为%p\n", takao.height,p++);
    printf("体重 = %.1f 地址为%p\n", takao.weight,p++);
    printf("奖学金 = %ld 地址为%p\n", takao.schols,p);

    return 0;
}