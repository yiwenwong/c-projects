//编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。
#include<stdio.h>
void mat_mul(const int a[4][3],const int b[3][4],int c[3][3])
{
    int i,j,k;
    for (i = 0; i < 3; i++)
    {
        for (  j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                c[i][j]=a[k][i]*b[j][k];
            }
        }   
    }
}


int main(void)
{   int i,j;
    int a[4][3]={0};
    int b[3][4]={0};
    int c[3][3]={0};
    for (  i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d",&a[i][j]);
            }     
        }
        for (  i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                scanf("%d",&b[i][j]);
            }     
        }
mat_mul(a, b ,c);
for (  i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d",c[i][j]);
            }     
        }
        return 0;
}