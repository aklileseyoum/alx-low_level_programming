#include "main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int i, len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len - 1) / 2; i < len; i++)
			_putchar(str[i]);
	}
}
