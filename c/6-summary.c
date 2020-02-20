/*以实数的形式返回a和b的平均值*/
double ave2(int a, int b) {
    return (double)(a + b) / 2;
}

/*以实数的形式返回数组a的所有元素的平均值*/
double ave_ary(const int a[], int n)
{
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum / n;
}

/*将数组b开头的n个元素复制给数组a*/
void cpy_ary(int a[], const int b[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = b[i];
}

/*返回二维数组a的所有构成元素的总和*/
int sum_ary2D(const int a[][3], int n)
{
    int i, j;
    int sum = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < 3; j++)
            sum += a[i][j];
    return sum;
}