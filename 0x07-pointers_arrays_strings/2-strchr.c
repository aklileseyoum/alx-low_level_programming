#include "main.h"

char *_strchr(char *s, char c)
{
	int i, j, found;

	found = 0;
	for (i = 0; *(s + i) = '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s);
		}
		else
			continue;
	}
	if (found == 1)
		return (s);
	else
		return (0);
}
