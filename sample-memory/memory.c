#include <stdio.h>
#include <stdlib.h>

#define N 5
#define NL 7

int main(void) {
    int *ip;
    int *large_ip;

    if ((ip = (int *)malloc(N * sizeof(int))) == NULL) {
        printf("memory allocated failed!\n");
        exit(1);
    }

    int i;

    for (i = 0; i < N; i++) {
        ip[i] = i;
        printf("ip[%d]=%d\t", i, ip[i]);
    }

    printf("\n");

    if ((large_ip = (int *)realloc(ip, NL * sizeof(int))) == NULL) {
        printf("memory allocated failed!\n");
        exit(1);
    }

    free(ip);
    ip = NULL;

    for (i = N; i < NL; i++) {
        large_ip[i] = 0;
    }

    for (i = 0; i < NL; i++) {
        printf("ip[%d]=%d\t", i, large_ip[i]);
    }

    printf("\n");

    // free(large_ip);
    large_ip = NULL;

    return 0;
}