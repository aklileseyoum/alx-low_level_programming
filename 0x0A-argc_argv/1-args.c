#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	i =0;
	while (argv[i] != NULL)
		i++;
	printf("%d\n", i);

	return (0);
}
