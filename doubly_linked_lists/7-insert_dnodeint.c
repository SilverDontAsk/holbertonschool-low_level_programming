#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to pointer to head
 * @idx: index of the list where the new node will be added
 * @n: what to store in the new node
 * Return: address of the new node, null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *n_node, *current;
unsigned int k;
n_node = malloc(sizeof(dlistint_t));
if (n_node == NULL)
return (NULL);
n_node->n = n;
if (*h == NULL || idx == 0)
{
n_node->prev = NULL;
n_node->next = *h;
if (*h != NULL)
(*h)->prev = n_node;
*h = n_node;
return (n_node);
}
current = *h;
for (k = 0; current != NULL && k < idx - 1; k++)
current = current->next;
if (current == NULL)
{
free(n_node);
return (NULL);
}
n_node->prev = current;
n_node->next = current->next;
if (current->next != NULL)
current->next->prev = n_node;
current->next = n_node;
return (n_node);
}

