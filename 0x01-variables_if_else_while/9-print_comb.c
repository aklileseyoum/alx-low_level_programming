#include <stdio.h>
/**
 * main - Entry point
 *
 *
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '8'; i++){
		putchar(i);
		if (i != '9'){
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}
	putchar('\n');

	return (0);
}
