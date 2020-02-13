//创建函数put_count，显示被调用的次数(如下显示的是调用3次函数put_count的运行结果)

#include <stdio.h>



void put_count(void)
{
    static int sx = 0;
    printf("put_count：第%d次\n", ++sx);
}

int main(void)
{
    int i,n;
    printf("次数:");
    scanf("%d",&n);
     for(i=0;i<n;i++)
     put_count();
    return 0;
}