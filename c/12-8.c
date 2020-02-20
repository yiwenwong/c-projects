/*
计算两点之间的距离
*/
#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))/*计算平方*/

/*表示点的坐标的结构体*/
typedef struct {
    double x; /*X坐标*/
    double y; /*Y坐标*/
} Point;

/*返回点pa和点pb之间的距离*/
double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void)
{
    Point crnt, dest;
    printf("当前地点的X坐标："); scanf("%lf", &crnt.x);
    printf("当前地点的Y坐标："); scanf("%lf", &crnt.y);
    printf("目的地的X坐标："); scanf("%lf", &dest.x);
    printf("目的地的Y坐标："); scanf("%lf", &dest.y);

    printf("到目的地的距离为%.2f\n", distance_of(crnt, dest));

    return 0;
}