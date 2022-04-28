#include "main.h"
#include <math.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, mult, sum = 0;

	for (i = 0; i < sizeof(b); i++)
	{
		mult = b[i] * (pow(2, i));
		sum += mult;
	}

	return (sum);
}
