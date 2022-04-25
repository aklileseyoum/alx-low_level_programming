#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - freed the linked list
 * @head: input linked list pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->n);
		free(temp);
		temp = temp->next;
	}
}
