#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a = 1.0;
    char s[32];
    unsigned char *p = (unsigned char *)&a;

    printf("%X\n", *p);
    printf("%X\n", *(p + 1));
    printf("%X\n", *(p + 2));
    printf("%X\n", *(p + 3));

    return 0;
}
