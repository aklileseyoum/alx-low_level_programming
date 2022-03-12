#include <stdio.h>
/**
 * main - Entry point
 *
 *
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++){
		putchar(i);
		putchar(',');
	}
	putchar('\n');

	return (0);
}
