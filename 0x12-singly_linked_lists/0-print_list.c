#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h->next != '\0')
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] (%s)", h->len, h->str);
		printf("\n");
		i++;
	}

	return (i);
}
