#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head and returns head node's data
 * @head: input pointer
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;
	i = temp->n;
	free(temp->n);
	free(temp);

	return (i);
}
