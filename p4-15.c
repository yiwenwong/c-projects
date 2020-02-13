//编写一段程序，显示出身高和标准体重的对照表。显示的身高范围和间隔由输入的整数值进行结控制，标准体重精确到小数点后2位。
#include <stdio.h>

int main(void)
{
    int f,l,interval,i;
    double w;
    
   
    printf("开始数值（cm）："); scanf("%d", &f);
    printf("结束数值（cm）："); scanf("%d", &l);
    printf("间隔数值（cm）："); scanf("%d", &interval);
    for(i=f;i<=l;i=i+interval)
    {
        w=(i-100)*0.9;
        printf("%dcm    %.2fkg\n",i,w);
    }
    return 0;
}