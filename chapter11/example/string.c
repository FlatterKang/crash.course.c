#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "banyuan";
    char *p = str;
    int len = strlen(str);

    int i ;

    for (i = 0; i < len; i++) {
        printf("%c", *(p + i));
    }

    printf("\n");

    for (i = 0; i < len; i++) {
        printf("%c", p[i]);
    }

    printf("\n");

    for (i = 0; i < len; i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    for (i = 0; i < len; i++) {
        printf("%c", *(str + i));
    }

    printf("\n");
    
    return 0;
}