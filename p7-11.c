//创建一个程序，分别对代码清单7-11和代码清单7-12进行改写，从0.0递增到1.0,每次递增0.01,求递增后的所有值的累计。注意对比二者的运行结果。
int main(void)
{
    float x;
    double sum1=0,sum2=0;
    for (x = 0.0; x <= 1.0; x += 0.01)
        sum1=sum1+x;
        printf("sum1 = %f ", sum1);
    
    return 0;
 
    int i;
    float n;

    for (i = 0; i <= 100; i++) {
        n = i / 100.0;
        sum2=sum2+n;
    }
 printf("sum2 = %f ", sum2);
    return 0;
}