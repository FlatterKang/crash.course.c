#include <stdio.h>

int main(void) {
    int a = 10, *pa = &a;
    double b = 99.9, *pb = &b;
    char c = 'c', *pc = &c;

    printf("%p    %p    %p\n", &a, &b, &c);
    printf("%p    %p    %p\n", pa, pb, pc);

    pa++;
    pb++;
    pc++;
    printf("%p    %p    %p\n", pa, pb, pc);

    pa -= 2;
    pb -= 2;
    pc -= 2;
    printf("%p    %p    %p\n", pa, pb, pc);

    return 0;
}