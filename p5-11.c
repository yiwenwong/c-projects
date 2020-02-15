#include <stdio.h>

//个人总分
void mat_add1(const int a[6][2], int b[6])
{
    int i, j;
    for (i = 0; i < 6; i++){
        for (j = 0; j < 2; j++)
           b[i]=b[i]+a[i][j];
           printf("%d ",b[i]);
    }
    printf("\n");
}
//显示学科总分
void mat_add2(const int a[6][2],int b[2])
{
    int i, j;
     for(j=0;j<2;j++){
         for(i=0;i<6;i++)
         b[j]=b[j]+a[i][j];
         printf("%d ",b[j]);
     }
     printf("\n");
}
//个人均分
void mat_ave1(const int m[6])
{
    int i, j;
    for (i = 0; i < 6; i++) {
         
            printf("%f", m[i]*1.0/2);
        putchar('\n');
    }
}

void mat_ave2(const int m[2])
{
    int i, j;
    for (i = 0; i < 2; i++) {
         
            printf("%f", m[i]*1.0/6);
        putchar('\n');
    }
}


void mat_scan(int m[6][2])
{
    int i, j;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++)
            scanf("%4d", &m[i][j]);
        putchar('\n');
    }
}

int main(void)
{
    int i, j;
    int tensu[6][2] = {0};
   
    int persum[6]={0};
    int subsum[2]={0};
    mat_scan(tensu);
 
 
    puts("个人总分"); mat_add1(tensu,persum);  
    puts("个人均分"); mat_ave1(persum);  
    puts("学科总分"); mat_add2(tensu,subsum); 
    puts("学科均分"); mat_ave2(subsum); 
    return 0;
}