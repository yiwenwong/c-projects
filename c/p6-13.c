//改写代码清单6-16的程序，将两次考试的分数存储在三维数组中。
#include <stdio.h>

 
void mat_add(const int a[4][3], const int b[4][3] , int c[4][3])
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
}

 
void mat_print(const int m[4][3])
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", m[i][j]);
        putchar('\n');
    }
}
void mat_form(const int a[4][3], const int b[4][3] , int c[2][4][3])
{
    int i,j,k;
        for(j=0;j<4;j++)
        {
            for(k=0;k<3;k++)
            {
                c[0][j][k]=a[j][k];
                c[1][j][k]=b[j][k];
            }
        }
}

int main(void)
{
    int i, j;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int sum[4][3];
    int tensu[2][4][3];

    mat_form(tensu1,tensu2,tensu);

    mat_add(tensu1, tensu2, sum); 

    puts("第一次考试的分数"); mat_print(tensu1);  

    puts("第二次考试的分数"); mat_print(tensu2);  

    puts("总分"); mat_print(sum);  

    return 0;
}