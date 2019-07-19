#include <stdio.h>

int main(void) {
    char str[20] = "banyuan.club";

    char *s1 = str;
    char *s2 = str + 2;

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    char c1 = str[4];
    char c2 = *str;
    char c3 = *(str + 4);
    char c4 = *str + 2;
    char c5 = (str + 1)[5];

    printf("c1 = %c\n", c1);
    printf("c2 = %c\n", c2);
    printf("c3 = %c\n", c3);
    printf("c4 = %c\n", c4);
    printf("c5 = %c\n", c5);
    
    return 0;
}