#include <stdio.h>
/**
 * main - Entry point
 *
 *
 */
int main (void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++){
		if (i != 'e'){
			if (i != 'q')
				putchar(i);
			else
				continue;
		}
		else
			continue;
	}

	return (0);
}
