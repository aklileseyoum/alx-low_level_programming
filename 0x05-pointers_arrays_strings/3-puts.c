#include "main.h"
/**
 * _puts - prints a string.
 * @str: pointer to input string.
 * Return: Returns nothing.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
