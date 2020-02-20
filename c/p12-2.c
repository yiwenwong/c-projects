//代码清单12-5的程序中，结构体对象sanaka的各成员的值都有初始值。改写这个程序，声明时不为其赋初始值，而且各成员的值从键盘输入。
#include <stdio.h>

#define NAME_LEN 64

typedef struct student {         
    char name[NAME_LEN];    
    int height;             
    float weight;        
    long schols;    
} Student;

 
void hiriko(Student *std)
{
    if (std->height < 180) std->height = 180;
    if (std->weight > 80) std->weight = 80;
}


int main(void)
{
    Student sanaka = {"Sanaka"};
    printf("姓名 = ");scanf("%s", &sanaka.name);
    printf("身高 =  " );scanf("%d", &sanaka.height);
    printf("体重 =  ");scanf("%.1f", &sanaka.weight);
    printf("奖学金 =  "); scanf("%ld", &sanaka.schols);

    hiriko(&sanaka);

    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

    return 0;
}