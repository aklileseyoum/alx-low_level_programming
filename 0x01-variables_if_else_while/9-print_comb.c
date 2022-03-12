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
		putchar(',');
	}
	putchar(i++);
	putchar('\n');

	return (0);
}
