#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation
 * @n: the number
 *
 */
void print_binary(unsigned long int n)
{
	int num = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(num);
}
