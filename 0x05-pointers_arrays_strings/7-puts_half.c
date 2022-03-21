#include "main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int i, j, len;

	while (str[j] != '\0')
	{
		j++;
	}
	len = j;
	if (len % 2 == 0)
	{
		for (i = (len / 2) + 1; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len - 1) / 2; i < len; i++)
			_putchar(str[i]);
	}
}
