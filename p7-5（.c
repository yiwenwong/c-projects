#include <stdio.h>
#include <stdlib.h>

unsigned int set(unsigned int x, int pos) {
    unsigned modify = 0x1 << pos;
    /* 1 << 3 -> 1000 */
    x = x | modify;
    return x;
}

unsigned int unset(unsigned int x, int pos) {
    unsigned modify = ~(0x1 << pos);
    x = x & modify;
    return x;
}

int main(int argc, char** argv) {
unsigned int n = atoi(argv[1]);
    int pos = atoi(argv[2]);

    unsigned int x = set(n, pos);
    printf("after or is 0x%x\n", x);

    x = unset(n, pos);
    printf("after and is 0x%x\n", x);
    return 0;
}