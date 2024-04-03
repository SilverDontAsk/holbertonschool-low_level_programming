#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
