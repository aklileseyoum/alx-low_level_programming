#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @s: pointer to input string.
 * Return: Returns nothing.
 */
void print_rev(char *s)
{
	int len, i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	len = i;
	for(i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
