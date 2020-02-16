//编写如下函数，将*y年*m月*d日的日期，修改为其前一天或后一天的曰期。

#include <stdio.h>
void decrement_date(int *y,int *m,int *d)
{
   if(*d==1)
   {
       if(*m==1)
       {
           *y=*y-1;
           *m=12;
           *d=31;
       }
       else 
       {*m=*m-1;
       switch(*m)
       {
        case 1: case 3:case 5:case 7:case 8:case 10:
        *d=31;break;
        case 4:case 6:case 9:case 11:
        *d=30;break;
        case 2:
        if(*y%100!=0&&*y%4==0||*y%400==0) *d=29;
        else *d=28;break;
       }
       }
   }else
   *d=*d-1;
   
}
void increment_date(int *y,int *m,int *d)
{
   
       switch(*m)
       {
        case 1: case 3:case 5:case 7:case 8:case 10:
        if(*d==31){*m=*m+1;*d=1;}else*d=*d+1;break;
        
        case 4:case 6:case 9:case 11:
       if(*d==30){*m=*m+1;*d=1;}else*d=*d+1;break;
        
        case 2:
        if(*y%100!=0&&*y%4==0||*y%400==0){
            if(*d==29)
            {*m=*m+1;*d=1;}
            else *d=*d+1;}
        else if(*d==28)
        {*m=*m+1;*d=1;}
        else *d=*d+1; break;

        case 12:
         if(*d==31){*y=*y+1;*m=1;*d=1;}else*d=*d+1;break;
       }
}
    