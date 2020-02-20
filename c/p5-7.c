//编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
//注意利用对象式宏来声明数组的元素个数，如代码清单5-12那样。
#include <stdio.h>

#define NUMBER 80     

int main(void)
{
    int i,j;          
    int tensu[NUMBER]={0};   

    for(i=0;i<NUMBER;i++);
    printf("数据个数为%d",i);

printf("{");
for(j=0;j<NUMBER;j++)
{
    printf("%d, ",tensu[j]);
}
    printf("}"); 
    return 0;
}