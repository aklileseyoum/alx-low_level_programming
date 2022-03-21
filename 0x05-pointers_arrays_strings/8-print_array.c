#include "main.h"
#include <stdio.h>
/**
 * print_array - lists elements of the array
 * @a: pointer to the array
 * @n: number of elements in the array
 * Return: Returns nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
	
