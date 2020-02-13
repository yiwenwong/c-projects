//创建一个函数，连续发10次响铃。
#include <stdio.h>

void alert(int n)
{
  int i;
  for(i=0;i<n;i++)
        printf("\a");
}

int main(void)
{
     int no=10;
    alert(no);
    return 0;
}