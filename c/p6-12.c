//创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中。

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