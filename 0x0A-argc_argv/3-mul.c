#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i = 1;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		while (argc >= 1)
		{
			i = i * atoi(argv[argc - 1]);
			argc--;
		}
		printf("%d\n", i);
	}

	return (0);
}
