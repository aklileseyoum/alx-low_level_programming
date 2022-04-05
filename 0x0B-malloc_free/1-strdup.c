#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Entry point
 *@str: input string
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s = (char *)malloc(i + 1 * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			s[i] = str[i];
		return (s);
	}

	return (NULL);
}
