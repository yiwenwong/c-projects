//创建一个程序，输入一个实数作为面积，求面积为该实数的正方形的边长。
#include<stdio.h>
#include<math.h>
double sides (double n)
{
    return sqrt(n);
}
int main(void)
{ double s,t;
    printf("请输入面积：");
   scanf("%lf",&s);
   t=sides(s);
   printf("%f",t);
   return 0;
}