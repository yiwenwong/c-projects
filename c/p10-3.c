//编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。
void sort3(int *n1,int *n2,int *n3){
    int temp;
    if(*n1>*n2){
        temp=*n2;
        *n2=*n1;
        *n1=temp;
    }
      if(*n2>*n3){
        temp=*n3;
        *n3=*n2;
        *n2=temp;
    }
    printf("%d %d %d\n",*n1,*n2,*n3);
}