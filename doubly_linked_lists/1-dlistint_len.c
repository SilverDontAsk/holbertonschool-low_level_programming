#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - returns length of elements in a doubly linked list
 * @h: pointer to head of list
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
