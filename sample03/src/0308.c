#include <stdio.h>

int main(void) {
    int sum = 0;
    int i = 0;

    while (i < 100) {
        sum += ++i;
        /*
        i = i + 1;
        sum = sum + i;
        */
    }

    printf("1~100的和是：%d\n", sum);

    return 0;
}