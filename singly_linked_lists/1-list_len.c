#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
const list_t *current = h;
size_t c = 0;
while (current != NULL)
{
current = current->next;
c++;
}
return (c);
}
