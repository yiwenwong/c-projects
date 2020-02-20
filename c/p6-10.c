//创建一个函数，对元素个数为n的int型数组v2进行倒序排列，并将其结果保存在数组v1中。
#include <stdio.h>

 void intary_rcpy(int v1[],const int v2[],int n)
{
    int i,v1[n];
    for ( i = n-1; i >=0; i--)
    {
       v1[i]=v2[n-1-i];
    }
}

int main(void)
{   int i;
    int v1[5];
    int v2[5]={6,2,3,1,5};
    printf("倒序数组为：\n");
    rev_intary(v1,v2,5);
    for ( i = 0; i < 5; i++)
    {
       printf("%d",v1[i]);
    }
    
    return 0;
}