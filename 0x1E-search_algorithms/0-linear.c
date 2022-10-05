#include <stdlib.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	if(*array == NULL)
		return (-1)
	unsigned int i;
	int found = 0;
	for (i = 0; i < size; i++)
	{
		if (value == *(array + i))
		{
			found = 1;
			return (i);
		}
	}

	if (found == 0)
		return (-1);
}
