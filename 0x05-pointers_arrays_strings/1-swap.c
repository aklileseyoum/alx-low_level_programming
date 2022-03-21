#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: integer to input number 1.
 * @b: integer to input number 2.
 * Return: Returns nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
