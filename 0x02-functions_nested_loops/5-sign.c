#include "main.h"
/** print_sign - tests whether a number is positive, negative or zero
 * @n: number to be checked.
 * Return: 1 if the number is positive
 * 0 if the number is zero and -1 if the number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
                _putchar(',');
                _putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
                _putchar(',');
                _putchar(' ');
		return (-1);
	}
}
