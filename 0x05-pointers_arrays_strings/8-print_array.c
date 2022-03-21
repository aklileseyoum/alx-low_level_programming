#include "main.h"
/**
 *
 *
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		_putchar(a[i] + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar(a[n - 1] + '0');
	_putchar('\n');
}
	
