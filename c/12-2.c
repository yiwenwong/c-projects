/*
用表示学生的结构体来现实佐中的信息
*/
#include <stdio.h>
#include <string.h>

#define NAME_LEN 64   /*姓名的字符数*/

struct student {
    char name[NAME_LEN];   /*姓名*/
    int height;            /*身高*/
    float weight;          /*体重*/
    long schols;           /*奖学金*/
};

int main(void)
{
    struct student sanaka;
    strcpy(sanaka.name, "Sanaka");
    sanaka.height = 175;
    sanaka.weight = 62.5;
    sanaka.schols = 73000;

    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

    return 0;
}