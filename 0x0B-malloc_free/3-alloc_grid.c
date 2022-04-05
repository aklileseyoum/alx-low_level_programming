#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **num;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	num = (int **)malloc(width * height * sizeof(int));
	if (num == NULL)
		return (NULL);
	for (i = 0; i < width * height; i++)
		num[i] = 0;

	return (num);
}
