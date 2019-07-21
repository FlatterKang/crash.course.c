#include <stdio.h>

int main(void) {
    int a = 100;
    int *p1 = &a;
    int **p2 = &p1;

    printf("%d    %d    %d\n", a, *p1, **p2);
    printf("%p    %p    %p\n", p1, p2, *p2);
    return 0;
}