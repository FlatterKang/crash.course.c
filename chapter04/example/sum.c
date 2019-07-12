#include <stdio.h>

int main(void) {
    int i = 1;
    int sum = 0;

    do {
        sum += i++;
    } while (i <= 100);

    while (i <= 100) {
        sum += i++;
    }

    for (; i <= 100; i++) {
        sum += i;
    }

    printf("1~100的和为%d\n", sum);

    return 0;
}