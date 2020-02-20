//编写一段程序，计算出输入的三个整数中的最小值并显示。
#include <stdio.h>

int main(void)
{
    int n1,n2,n3;
   
    puts("请输入两个整数");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    printf("整数3:"); scanf("%d", &n3);
    if (n1>=n2)
    {
       if (n2>=n3)
       {
           printf("它们的最小值是 %d。\n",n3);
       }
       else
       {
            printf("它们的最小值是%d。\n",n2);
       }
       
    }
    
     else  
    {
       if (n1>=n3)
       {
           printf("它们的最小值是%d。\n",n3);
       }
       else
       {
            printf("它们的最小值是%d。\n",n1);
       }
       
    }





    return 0;
    
   
}