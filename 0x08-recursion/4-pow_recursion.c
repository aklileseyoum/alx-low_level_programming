#include "main.h"
/**
 * _pow_recursion - gets value of x the power of y
 * @x: integer
 * @y: integer
 *
 * Return: On success x the power of y.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, (y - 1)));

	return (1);
}
