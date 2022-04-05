#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	else
	{
		char *s;

		s = malloc(size * sizeof(char));
		*s = c;
		if (s == NULL)
			return (NULL);
		else
			return (s);
	}
}
