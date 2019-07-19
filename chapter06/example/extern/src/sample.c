#include <stdio.h>

extern int add(int, int);
extern int diff(int, int);
extern double circle(int);
extern double area(int);

int main(void) {
    int a, b;
    printf("请输入两个整数：\n");
    printf("a:"); scanf("%d", &a);
    printf("b:"); scanf("%d", &b);

    printf("两个数的和是：%d\n", add(a, b));
    printf("两个数的差是：%d\n", diff(a, b));

    extern int radius;

    printf("半径为%d的圆形的周长为：%f\n", radius, circle(radius));
    printf("半径为%d的圆形的面积为：%f\n", radius, area(radius));

    return 0;
}

int radius = 8;

