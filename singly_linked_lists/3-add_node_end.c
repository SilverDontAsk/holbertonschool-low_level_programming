#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to pointer of head
 * @str: string
 * Return: address of the new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
int len;
const char *ptr = str;
list_t *current = *head;
list_t *n_node = malloc(sizeof(list_t));
if (n_node == NULL)
{
	return (NULL);
}
n_node->str = strdup(str);
if (n_node->str == NULL)
{
	free(n_node);
	return (NULL);
}
len = 0;
while (*ptr != '\0')
{
	len++;
	ptr++;
}
n_node->len = len;
n_node->next = NULL;
if (*head == NULL)
{
	*head = n_node;
}
else
{
while (current->next != NULL)
{
	current = current->next;
}
current->next = n_node;
}
return (n_node);
}
