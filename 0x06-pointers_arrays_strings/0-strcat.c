#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j;
	char new[1000];

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		new[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		new[j] = src[i];
		i++;
		j++;
	}
	new[j] = '\0';

	return (new);
}
