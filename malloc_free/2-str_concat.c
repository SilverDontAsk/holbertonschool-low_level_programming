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
int i;
char *res;
while (s1 && s1[lens1])
{
lens1++;
}
while (s2 && s2[lens2])
{
lens2++;
}
res = malloc(sizeof(char) * (lens1 + lens2 +1));
if (res == NULL)
{
return (NULL);
}
for (i = 0; i < lens1; i++)
res[i] = s1[i];
for (i = 0; i < lens2; i++)
res[lens1 + i] = s2[i];
res[lens1 + lens2] = '\0';
return (res);
}
