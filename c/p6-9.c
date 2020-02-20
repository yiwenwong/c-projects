// 创建一个函数，对元素个数为n的int型数组v进行倒序排列。

#include <stdio.h>

 void rev_intary(int v[],int n)
{
    int i;
    for ( i = n-1; i >=0; i--)
    {
       print("%d",v[i]);
    }
    
}

int main(void)
{
    int a[5]={6,2,3,1,5};
    printf("倒序数组为：\n");
    rev_intary(a,5);
    return 0;
}