#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <=98; n++)
			printf("%d, ", n);
	}
	else if (n == 98)
		printf("%d", n);
	else
	{
		for (; n >=98; n--)
			printf("%d, ", n);
	}
}
