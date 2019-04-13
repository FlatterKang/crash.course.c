#include <stdio.h>

extern double circle(int r);

int main(void) {
	double area = circle(2);
	printf("Area is %f\n", area);
}