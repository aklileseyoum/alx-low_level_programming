#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_listint - freed the linked list
 * @head: input linked list pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
