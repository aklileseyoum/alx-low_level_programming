#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node from the middle of the list
 * @head: head pointer of the list
 * @index: place of the node to be deleted
 * Return: 1 if successfull and -1 if not successfull
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = *head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	temp->next = temp->next->next;
	delete(temp);

	return (1);
}
