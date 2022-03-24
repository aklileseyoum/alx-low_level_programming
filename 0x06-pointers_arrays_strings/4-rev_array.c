#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, k, temp;

	k = n - 1;
	for (i = n - 1; i >= 0 && k > 0; i--)
	{
		j = i - k;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		k = k - 2;
	}
}
