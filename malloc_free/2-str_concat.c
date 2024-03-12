#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null on failure, otherwise concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int lens1;
int lens2;
int i, p;
char *res;
res = malloc(sizeof(char) * (lens1 + lens2 + 1));
if (s1 != NULL)
{
while (s1[lens1])
lens1++;
}
if (s2 != NULL)
{
while (s2[lens2])
lens2++;
}
if (res == NULL)
{
return (NULL);
}
for (i = 0; i < lens1; i++)
res[i] = s1[i];
for (p = 0; p < lens2; p++)
res[lens1 + p] = s2[p];
res[lens1 + lens2] = '\0';
return (res);
}
