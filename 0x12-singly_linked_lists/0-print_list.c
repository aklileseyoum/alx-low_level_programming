#include "lists.h"
#include <stdio.h>
/**
* print_list - A function that prints all the elements of a list_t list.
* @h: A constant variable of type list_t.
*
* Return: The number of nodes (i).
*
*/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h->next != '\0')
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] (%s)", h->len, h->str);
		printf("\n");
		i++;
		h = h->next;
	}

	return (i);
}
