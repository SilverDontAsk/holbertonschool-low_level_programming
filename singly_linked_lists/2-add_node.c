#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to pointer of head
 * @str: string
 * Return: address of the new element or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
int len;
const char *ptr;
list_t *n_node = malloc(sizeof(list_t));
if (n_node == NULL)
{
return (NULL);
}
len = 0;
ptr = str;
while (*ptr != '\0')
{
	len++;
	ptr++;
}
n_node->str = strdup(str);
if (n_node->str == NULL)
{
free(n_node);
return (NULL);
}
n_node->len = len;
n_node->next = *head;
*head = n_node;
return (n_node);
}
