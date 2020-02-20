 //使用条件运算符替换练习3-6的程序中的if语句，实现同样的功能。
 #include <stdio.h>

int main(void)
{
    int n1,n2,n3;
   
    puts("请输入两个整数");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    printf("整数3:"); scanf("%d", &n3);

    printf("它们的最小值是 %d。\n",(n1>n2)?((n2>n3)?n3:n2):((n1>n3)?n3:n1));
    return 0;
}       