//编写如下函数，从键盘输入int型、long型和double型的值，将这些值作为xyz结构体的成员，返回该结构体的值。
struct xyz {
        int x;
        long y;
        double z;
    };
struct xyz scan_xyz()
{ 
    struct xyz temp;
     printf("x = ");scanf("%d", &temp.x);
    printf("y =  " );scanf("%ld", &temp.y);
    printf("z =  ");scanf("%lf", &temp.z);
    return temp;

}