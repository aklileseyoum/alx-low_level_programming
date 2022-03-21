#include "main.h"
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int len, i, j, k, temp;

        i = 0;
        while (s[i] != '\0')
        {
                i++;
        }

        len = i;
	k = len - 1;
        for (i = len - 1; i >= 0; i--)
        {
		while (k > 0)
		{
			j = i - k;
			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
			k = k - 2;
		}
        }
}
