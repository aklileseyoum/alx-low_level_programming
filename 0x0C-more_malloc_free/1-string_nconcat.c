#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two input strings
 * @s1: string input 1
 * @s2: string input 2
 * @n: integer input
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	s = (char *)malloc((i + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (k = 0, j = 0; k < (i + n); k++)
	{
		if (k < l1)
		{
			s[k] = s1[k];
		}
		else
		{
			s[k] = s2[j++];
		}
	}
	s[k] = '\0';

	return (s);
}
