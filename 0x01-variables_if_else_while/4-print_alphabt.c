#include <stdio.h>
/**
 * main - Entry point
 *
 *
 */
int main (void)
{
	int i;

	for (i = 97; i <= 122; i++){
		if (putchar(i) == 'q' || putchar(i) == 'e')
			continue;
		else
			putchar(i);
	}

	return (0);
}
