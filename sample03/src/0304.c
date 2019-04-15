#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i = 0;

	do {
		sum += ++i;
		/*
		i = i + 1;
		sum = sum + i;
		*/
	} while (i < 100);

	printf("1~100的和是：%d\n", sum);

	return 0;
}