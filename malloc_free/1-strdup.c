#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns poiter to new space in memory with str
 * @str: string
 * Return: NULL if NULL, duplicated string, otherwise NULL
 */
char *_strdup(char *str)
{
char *dupst;
char *dupstp;
unsigned int len = 0;
const char *temp = str;
if (str == NULL)
{
	return (NULL);
}
while (*temp != '\0')
{
len++;
temp++;
}
dupst = (char *)malloc((len + 1) * sizeof(char));
if (dupst == NULL)
{
	return (NULL);
}
dupstp = dupst;
while (*str != '\0')
{
*dupstp++ = *str++;
}
*dupstp = '\0';
return (dupst);
}
