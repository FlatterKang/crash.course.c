#include <stdio.h>

int sum(int m, int n); //int sum(int,int)

int main(void) {
    int begin = 1;
    int end = 100;
    int result = sum(begin, end);
    printf("The sum from %d to %d is %d\n", begin, end, result);
    return 0;
}

int sum(int m, int n) {
    int i , sum = 0;

    for (i = m; i <= n; i++) {
        sum += i;
    }

    return sum;
}