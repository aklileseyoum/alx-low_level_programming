#include "main.h"
/**
 *
 *
 *
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
