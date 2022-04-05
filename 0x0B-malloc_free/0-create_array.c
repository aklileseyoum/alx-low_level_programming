#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
                return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = c;

		return (s);
	}
	
	return (NULL);
}
