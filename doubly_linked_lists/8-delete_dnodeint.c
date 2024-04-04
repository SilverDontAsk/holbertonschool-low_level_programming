#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: pointer to pointer to head
 * @index: index of the node that should be deleted
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int k;
if (*head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
for (k = 0; current != NULL && k < index - 1; k++)
current = current->next;
if (current == NULL || current->next == NULL)
return (-1);
temp = current->next->next;
free(current->next);
current->next = temp;
if (temp != NULL)
temp->prev = current;
return (1);
}
