#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = (char *)malloc(sizeof(str));
	if (s != NULL)
	{
		for (i = 0; i < 2 * sizeof(s); i++)
			s[i] = str[i];
		return (s);
	}

	return (NULL);
}
