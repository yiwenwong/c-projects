/*
将数组的所有元素设置为0
*/
#include <stdio.h>

/*把0赋值给有n个元素的数组v的所有元素*/
void set_zero(int v[], int n)
{
    for (int i = 0; i < n; i++)
        v[i] = 0;
}

/*显示有n个元素的数组v的所有元素*/
void print_array(const int v[], int n)
{
    printf("{ ");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("}");
}

int main(void)
{
    int ary1[] = {1, 2, 3, 4, 5};
    int ary2[] = {3, 2, 1};

    printf("ary1 = "); print_array(ary1, 5); putchar('\n');
    printf("ary2 = "); print_array(ary2, 3); putchar('\n');

    set_zero(ary1, 5);
    set_zero(ary2, 3);

    printf("把0赋值给了两个数组的所有元素。\n");
    printf("ary1 = "); print_array(ary1, 5); putchar('\n');
    printf("ary2 = "); print_array(ary2, 3); putchar('\n');

    return 0;
}