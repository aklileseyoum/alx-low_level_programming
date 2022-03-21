#include "main.h"
/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while(s[0] != '/0')
	{
		i++;
	}

	return (i);
}
