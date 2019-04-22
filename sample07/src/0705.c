#include <stdio.h>

int main(void) {
    int a = 100, b = 999, temp;
    int *pa = &a;
    int *pb = &b;
    printf("a=%d,b=%d\n", a, b);

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("a=%d,b=%d\n", a, b);

    return 0;
}