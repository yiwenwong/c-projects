//编写一个程序，确认只要没有发生高位溢出，则

//无符号整数位左移后的值等于其乘以2的指数幂后的值。
//无符号整数位右移后的值等于其除以2的指数幂后的值。
 
 #include<stdio.h>
 
 int main(void)
 {
     int n;
     scanf("%d",&n);
     unsigned int after_shift1=(n<<1);
      unsigned int after_shift2=(n>>1);
     printf("%d\n",after_shift1);
     printf("%d\n",after_shift2);
     return 0;
 }