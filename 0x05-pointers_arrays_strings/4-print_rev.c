#include "main.h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int len, i;

	 i = 0;
        while(s[i] != '\0')
        {
                i++;
        }

	len = i;
	for(i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		fflush(stdout);
	}
	_putchar('\n');
}
