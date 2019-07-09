/*
删除已知数组{1,2,3,4,5,6,7,8,9}的第6个位置上的元素
 */
#include <stdio.h>

int main(void) {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[8];//数组无法直接删除，只能创建一个新数组
    int i = 0;
    int index = 6;//删除元素的位置，以0开始

    for (; i < 9; i++) {
        if (i < index) {
            arr2[i] = arr[i];
        } else if (i > index) {
            arr2[i - 1] = arr[i];
        }
    }

    printf("原数组为：\n");

    for (i = 0; i < 9; i++) {
        printf("%d   ", arr[i]);
    }

    printf("\n插入元素后新数组为：\n");

    for (i = 0; i < 8; i++) {
        printf("%d   ", arr2[i]);
    }

    printf("\n");
    
    return 0;
}