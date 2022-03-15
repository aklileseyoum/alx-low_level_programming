#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;
		for (i = n; i <=98; i++)
			printf("%d, ", i);
	}
	else if (n == 98)
		printf("%d", n);
	else
	{
		int i;
		for (i = n; i >=98; i--)
			printf("%d, ", i);
	}
}
