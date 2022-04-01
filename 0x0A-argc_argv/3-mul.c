#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc < 3)
		printf("%s\n", "Error");
	else
	{
		while (argc <= 3)
		{
			i = i * atoi(argv[argc]);
			argc--;
		}
		printf("%d\n", i);
	}

	return (0);
}

