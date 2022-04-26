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
	
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
