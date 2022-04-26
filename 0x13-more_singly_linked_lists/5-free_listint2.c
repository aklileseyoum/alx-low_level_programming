#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/** 
 * free_listint2 - frees the list and sets head to null
 * @head: input list pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *h;
	
	temp = *head;
	h = temp;
	while (temp != NULL)
	{
		free(temp->n);
		free(temp);
		h = h->next;
	}
	head = NULL;
}
