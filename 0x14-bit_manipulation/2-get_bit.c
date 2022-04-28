#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int *a, i = 0, j = 0, temp;
	int num;

	a = malloc(100 * sizeof(int));
	if (a == NULL)
		return (-1);
	while (n != 0)
	{
		a[i] = n & 1;
		n >>= 1;
		i++;
	}
	if (index >= i)
		return (-1);
	for (j = 0; j < i; j++)
	{
		temp = a[j];
		a[j] = a[i - 1];
		a[i - 1] = temp;
		i--;
	}
	
	return (a[index]);
}
