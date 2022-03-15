#include "main.h"
/**
 * main - print lower case letters
 *
 * Description: using the main function
 * this program prints "Programming _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
