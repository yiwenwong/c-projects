//对代码清单12-7的程序进行改写。

//不将姓名、身高等数据作为初始值，而是从键盘输入。

//可以选择按身高进行升序排列，或者按照姓名的顺序排列。

#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

 
typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

 
void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

 
void sort_by_height(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}

void sort_by_name(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].name > a[j].name)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}

int main(void)
{
    int i,key;
    Student std[NAME_LEN];
    for(i=0;i<NAME_LEN;i++)
    {
        printf("姓名 = ");scanf("%s", &std[i].name);
        printf("身高 =  " );scanf("%d", &std[i].height);
        printf("体重 =  ");scanf("%.1f", &std[i].weight);
        printf("奖学金 =  "); scanf("%ld", &std[i].schols);

    }
     

    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    
    do{
    printf("1.身高排序 2.姓名排序");scanf("%d",&key);
    }while(key<1||key>2);
    
    if(key==1){
    sort_by_height(std, NUMBER);

    puts("\n按身高排序。");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
    else{
    sort_by_name(std, NUMBER);
    puts("\n按姓名排序。");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    return 0;
    }
}
