#include "main.h"
/**
 * factorial - Returns factorial of a number
 * @n: number
 *
 * Return: On success n factorial.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
