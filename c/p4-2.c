//编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。
int main(void)
{
    int a,b;
   int sum=0;
    puts("请输入两个整数");
    printf("整数A:"); scanf("%d", &a);
    printf("整数B:"); scanf("%d", &b);
    a++;
do
{
    sum=sum+a;
    a++;
}while(a<b);
printf("整数和为%d",sum);
return 0;
}