#include <stdio.h>

int main(void) {
    int no;

    printf("正整数：");
    scanf("%d", &no);

    while (no > 0) {
        putchar('*');
        putchar('\n');
        no--;
    }

    return 0;
}