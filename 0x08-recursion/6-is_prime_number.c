#include "main.h"
/**
 * prime - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int prime(int a, int b)
{
	if (a == b)
		return (prime(a, (b + 1)));
	if (b > 9)
		return (0);
	if (a % b == 0)
		return (1);

	return (prime(a, (b + 1)));
}
/**
 * is_prime_number - returns 0 if its prime and 1 if its not
 * @n: number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, 1));
}
