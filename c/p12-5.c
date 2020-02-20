//改写代码清单12-9的程序，使其能够选择两种方法——输入目的地坐标的方法以及输入X方向和Y方向的行驶距离的方法。

//例如:假设当前值为{5.0,3.0}，想要移动至{7.5,8.9}。输入坐标时输入7.5和8.9,输入行驶距离时则输入2.5和5.9。
#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n)) 

 
typedef struct {
    double x;  
    double y;  
} Point;

 
typedef struct {
    Point pt;    
    double fuel;  
} Car;

 
double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}
 

void put_info(Car c)
{
    printf("(%.2f,%.2f)\n", c.pt.x, c.pt.y);
    printf("%.2f\n", c.fuel);
}

 
int move(Car *c, Point dest)
{
    double d = distance_of(c->pt, dest);
    if (d > c->fuel)
        return 0;
    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int main(void)
{
    Car mycar = {{0.0, 0.0}, 90.0};
    while (1) {
        int select;
        int mode;
        Point dest;
        put_info(mycar);
        printf("开动汽车吗【YES---1/NO--0】：");
        scanf("%d",&select);
        if (select != 1)break;
        do{
        printf("选择模式【坐标---1/距离--0】：");
        scanf("%d", &mode);
        }while(mode<0||mode>1);
        if(mode=1){
        printf("目的地的X坐标："); scanf("%lf", &dest.x);
        printf("目的地的Y坐标："); scanf("%lf", &dest.y);
        if (!move(&mycar, dest))
            puts("\a燃料不足无法行驶。");
        }
        else
        {Point dis;
        printf("目的地的x距离："); scanf("%lf", &dis.x);
        printf("目的地的Y距离："); scanf("%lf", &dis.y);
        dest.x=mycar.pt.x+dis.x;
        dest.y=mycar.pt.y+dis.y;
        if (!move(&mycar, dest))
            puts("\a燃料不足无法行驶。");   
        }
        

    }

    return 0;
}