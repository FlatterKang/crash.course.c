#include <stdio.h>

int main(void) {
    int sum = 0;
    int i = 1;

    while (i <= 100) {
        sum += i++;
        /*
        sum = sum + i;
        i = i + 1;
        */
    }

    printf("1~100的和是：%d\n", sum);

    return 0;
}