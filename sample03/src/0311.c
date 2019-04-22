/*
显示九九乘法表
*/
#include <stdio.h>

int main(void) {
    int i , j;

    for (i = 1; i <= 9; i ++) {
        for (j = 1; j <= 9; j++) {
            int n = i * j;
            /*
            if (n % 10 == 4) {
            	printf("   ");
            	continue;
            }
            */
            printf("%3d", n);
        }

        putchar('\n');
    }

    return 0;
}