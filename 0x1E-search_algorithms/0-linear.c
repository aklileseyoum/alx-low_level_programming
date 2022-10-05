#include <stdlib.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	int i;

	if(array == NULL)
		return (-1)
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == *(array + i))
			return (i);
	}

	return (-1);
}
