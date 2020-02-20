//创建一个函数search_idx,将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，返回和key相等的元素的个数。
#include <stdio.h>

#define NUMBER 5
 

 
int search_idx(const int v[], int idx[],int key,int n)
{
    int i,j=0;
    for (i = 0; i<n; i++)
    {
       if(v[i]==key)
       {
          idx[j]=i;
          j++;
       }
    }
    return  j;
}

int main(void)
{
    int i, j,ky, idx[6],count;
    int vx[NUMBER + 1];

    for (i = 0; i < NUMBER; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    printf("要查找的值:");
    scanf("%d", &ky);

 count=search_idx(vx,idx, ky, NUMBER);
 printf("相等元素有%d个",count);
 printf("下标为:");
 for ( j = 0; j < count; j++)
 { 
     printf("%d",idx[j]);
 }
 

    return 0;
}