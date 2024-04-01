#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints a linked list
 * @h: head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t c = 0;
while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", current->len, current->str);
current = current->next;
c++;
}
return (c);
}
