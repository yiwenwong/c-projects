/*
顺序查找（哨兵查找法）
*/
#include <stdio.h>

#define NUMBER 5
#define FAILED -1

/*从元素个数为n的数组v中查找和key一致的元素（哨兵查找法）*/
int search(int v[], int key, int n)
{
    int i;
    v[n] = key;
    for (i = 0; v[i] != key; i++)
        ;
    return (i < n) ? i : FAILED;
}

int main(void)
{
    int i, ky, idx;
    int vx[NUMBER + 1];

    for (i = 0; i < NUMBER; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    printf("要查找的值:");
    scanf("%d", &ky);

    if ((idx = search(vx, ky, NUMBER)) == FAILED)
        puts("查找失败！！！");
    else
        printf("%d是数组的第%d号元素。\n", ky, idx + 1);

    return 0;
}