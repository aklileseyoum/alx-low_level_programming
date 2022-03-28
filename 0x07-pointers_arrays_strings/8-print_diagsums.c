#include "main.h"

void print_diagsums(int *a, int size)
{
	int i, sum, sum2, n;

	sum = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + *(*(a + i) + i);
	}
	for (i = 0; i < size; i++)
	{
		n = size - (i + 1);
		sum2 = sum2 + *(*(a + i) + n);
	}
	_putchar(sum);
	_putchar(',');
	_putchar(' ');
	_putchar(sum2);
	_putchar('\n');
}
