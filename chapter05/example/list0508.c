/*
    对数组的全部元素进行倒序排列
*/
#include <stdio.h>
#define NUMBER 6

int main(void) {
    int i;
    int x[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < NUMBER / 2; i++) {
        int temp = x[i];
        x[i] = x[NUMBER - 1 - i];
        x[NUMBER - 1 - i] = temp;
    }

    puts("倒序排列了。");

    for (i = 0; i < NUMBER; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}