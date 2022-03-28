#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, sum, sum2, n;

	sum = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + *(a + (size + 1) * i);
	}
	for (i = 1; i <= size; i++)
	{
		sum2 = sum2 + *(a + (size - 1) * i);
	}
	printf("%d, %d\n", sum, sum2);
}
