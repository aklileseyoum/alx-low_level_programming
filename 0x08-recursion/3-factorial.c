#include "main.h"

int factorial(int n)
{
	if (n > 0)
		return ((n - 1) * factorial(n));
	return (n);
}
