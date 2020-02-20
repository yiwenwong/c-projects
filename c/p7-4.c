//编写set函数，返回将无符号整数x的第pos位设为1后的值。
//编写reset函数，返回将无符号整数x的第pos位设为0后的值。
//编写inverse函数，返回将无符号整数x的第pos位取反后的值.
#include <stdio.h>
#include <stdlib.h>

unsigned int set(unsigned int x, int pos) {
    unsigned modify = 0x1 << pos;
    x = x | modify;
    return x;
}

unsigned int reset(unsigned int x, int pos) {
    unsigned modify = ~(0x1 << pos);
    x = x & modify;
    return x;
}
unsigned inverse(unsigned x,int pos)
{
    unsigned modify = 0x1 << pos;
    x = x ^ modify;
    return x;
}

int main(int argc, char** argv) {
    unsigned int n = atoi(argv[1]);
    int pos = atoi(argv[2]);

    unsigned int x = set(n, pos);
    printf("after or is 0x%x\n", x);

    x = reset(n, pos);
    printf("after and is 0x%x\n", x);
    return 0;
    x = reverse(n, pos);
    printf("after xor is 0x%x\n", x);
    return 0;
}
