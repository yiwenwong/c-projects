/*
   求长方形的面积
*/
#include <stdio.h>

int main(void)
{
    int width;
    int height;

    puts("求长方形的面积。");

    printf("长: ");
    scanf("%d", &width);

    printf("宽: ");
    scanf("%d", &height); // 注意不要忘记&

    /* 显示 */
    printf("面积是 %d。\a\n", width * height); // \a和\n分别表示响铃和换行。

    return 0;
}