#include <stdio.h>
#include "main.h"

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s/n", argv[argc]);
		i++;
	}

	return (0);
}
