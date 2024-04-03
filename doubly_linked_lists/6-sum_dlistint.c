#include "lists.h"
/**
 * sum_dlistint - sums all the data of a doubly linked list
 * @head: head of the list
 * Return: 0 if empty, sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
