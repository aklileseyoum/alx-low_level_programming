#include "main.h"
/**
 * binary_to_uint - changes decimal to binary
 * @b: input string of 0 and 1
 * Return: binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum;

	for (d = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			sum = (sum<<1) | 1;
		else if (b[i] == '0')
			sum <<=1;
		else if (b[i] != '\0' && b[i] != '1')
			return (0);
	}

	return (sum);
}
