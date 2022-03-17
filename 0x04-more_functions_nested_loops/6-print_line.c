#include "main.h"
/**
 * print line() - prints line with length of n
 *
 * it has no return type
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n')
}
