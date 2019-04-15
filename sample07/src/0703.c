#include <stdio.h>

int main(void)
{
	float a = 99.5, b = 10.6;
	char c = '@', d = '#';

	float *p1 = &a;
	char *p2 = &c;

	printf("%f,%d\n", *p1, *p2);

	p1 = &b;
	p2 = &d;

	printf("%f,%d\n", *p1, *p2);

	return 0;
}