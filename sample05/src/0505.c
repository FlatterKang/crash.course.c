/*
对数组的全部元素进行倒序排列
*/
#include <stdio.h>

int main(void)
{
	int i;
	int x[7];

	for (i = 0; i < 7; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++)
	{
		int temp = x[i];
		x[i] = x[6 - i];
		x[6 - i] = temp;
	}

	puts("倒序排列了。");
	for (i = 0; i < 7; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}