#include <stdio.h>
#include "main.h"

int main(int argc, char **argv)
{
	while (argc < 0)
		printf("%s/n", argv[argc--]);

	return (0);
}
