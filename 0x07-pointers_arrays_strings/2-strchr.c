#include "main.h"

char *_strchr(char *s, char c)
{
	int i, j, found;

	found = 0;
	for (i = 0; *(s + i) = '\0'; i++)
	{
		if (*(s + i) == c)
		{
			found = 1;
			j = 0;
			while (*(s + j) != '\0')
				_putchar(*(s + j));
			break;
		}
		else
			continue;
	}
	if (found == 1)
		return (*(s + i));
	else
		return (NULL);
}
