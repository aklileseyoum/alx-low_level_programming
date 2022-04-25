#include "lists.h"
#include <stdio.h>
/** 
 * free_listint2 - frees the list and sets head to null
 * @head: input list pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	list_t *temp;
	
	temp = head;
	while (temp != NULL)
	{
		free(temp->n);
		free(temp);
		temp = temmp->next;
	}
	head = NULL;
}
