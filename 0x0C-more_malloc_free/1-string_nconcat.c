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
	unsigned int i, j;
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
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < 6 && s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}

	return (s);
}
