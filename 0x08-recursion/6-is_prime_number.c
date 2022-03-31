#include "main.h"

int prime(int a, int b)
{
	if (b > 9)
		return (0);
	if (a % b == 0)
		return (1);
	return (prime(a, (b + 1)));
}

int is_prime_number(int n)
{
	return(prime(n, 1));
}
