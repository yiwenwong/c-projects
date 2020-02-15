//编写一段程序，纵向显示练习5-8中得到的分布图。
#include <stdio.h>

#define NUMBER 80     

int find_max_of_arrays(int a[], int length_of_a);

int main(void)
{
    int i, j;
    int num;              
    int tensu[NUMBER];    
    int bunpu[11] = {0};   

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);
    
    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2d号:", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

     
    int max = find_max_of_arrays(bunpu, num); 
    for (int i = 0; i < bunpu[max]; i++) {
        for (int j = 0; j <= 10; j++) {
            if (bunpu[j] >= bunpu[max] - i) {
                printf(" *");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}


 
int find_max_of_arrays(int a[], int length_of_a) {
    int max = 0;
    for (int i = 1; i < length_of_a; i++) {
        if (a[i] > a[max]) {
            max = i;
        }
    }
    return max;
}