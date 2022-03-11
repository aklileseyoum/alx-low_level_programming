#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	l = n%10;

	if (l > 5)
		printf("%s %d %s %d %s\n", "Last digit of ", n, " is ", l, "and is greater than 5");
	else if (l == 0)
		printf("%s %d %s %d %s\n", "Last digit of ", n, " is ", l, "and is 0");
	else if (l < 6 && l != 0)
		printf("%s %d %s %d %s\n", "Last digit of ", n, " is ", l, "and is less than 6 and not 0");

	return (0);
}
