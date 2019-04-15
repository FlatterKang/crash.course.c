#include <stdio.h>

int main(void)
{
	int a = 15;

	int *p = &a;

	int *q;
	q = &a;



	printf("%d,%d,%d\n", a, *p, *q);

	return 0;
}