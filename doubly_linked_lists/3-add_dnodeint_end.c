#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: pointer to pointer of head
 * @n: number of elements
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *n_node = malloc(sizeof(dlistint_t));
if (n_node == NULL)
{
return (NULL);
}
n_node->n = n;
n_node->next = NULL;
if (*head == NULL)
{
n_node->prev = NULL;
*head = n_node;
}
else
{
dlistint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = n_node;
n_node->prev = current;
}
return (n_node);
}
