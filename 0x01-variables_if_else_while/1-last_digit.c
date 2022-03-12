#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l;
	l = n%10;
	if (l > 5)
		printf("%s %d %s %d %s\n", "Last digit of", n, "is", l, "and is greater than 5");
	else if (l == 0)
		printf("%s %d %s %d %s\n", "Last digit of", n, "is", l, "and is 0");
	else if (l < 6 && l != 0)
		printf("%s %d %s %d %s\n", "Last digit of", n, "is", l, "and is less than 6 and not 0");

	return (0);
}
