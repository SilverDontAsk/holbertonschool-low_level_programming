#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a node at the beginning of a doubly linked list
 * @head: pointer to pointer of head
 * @n: number of elements
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *n_node = malloc(sizeof(dlistint_t));
if (n_node == NULL)
{
return (NULL);
}
n_node->n = n;
n_node->prev = NULL;
if (*head == NULL)
{
n_node->next = NULL;
}
else
{
n_node->next = *head;
(*head)->prev = n_node;
}
*head = n_node;
return (n_node);
}
