#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements of the linked list
 * @h: pointer input
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	lisint_t *temp;

	temp = h;
	while(temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}
