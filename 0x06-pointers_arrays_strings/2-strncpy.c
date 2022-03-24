#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (src[j] = '\0')
		j++;
	if (j < n)
	{
		for (i = 0; i <= n && src[i] != '\0'; i++)
			dest[i] = src [i];
		dest[i] = '\0';
	}
	else
	{
		for (i = 0; i <= n && src[i] = '\0'; i++)
			dest[i] = src[i];
	}

	return (dest);
}
