#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to head of list
 * @index: index of the node
 * Return: nth node of dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	if (i == index)
	{
		return (head);
	}
	return (NULL);
}
