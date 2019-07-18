/*
查询已知数组中是否存在元素5，如果存在显示位置，如果不存在显示-1
 */
#include <stdio.h>

int main(void) {
    int i, len;
    int k = 5;
    int position = -1;
    int v[] = {1, 2, 3, 4, 10, 6, 7, 8, 5};
    len = sizeof(v) / sizeof(int);

    for (i = 0; i < len; i++) {
        if (v[i] == k) {
            position = i;
            break;
        }
    }

    printf("元素5的位置为：%d\n", position);

    return 0;
}