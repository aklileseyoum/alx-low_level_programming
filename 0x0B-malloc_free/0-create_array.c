#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	else
	{
		char *s;
		unsigned int i;

		s = (char *)malloc(size * sizeof(char));
		if (s != NULL)
		{
			for (i = 0; i < size; i++)
				s[i] = c;

			return (s);
		}
	}

	return (NULL);
}
