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
if (s1 == NULL || s2 == NULL)
{
	return (NULL);
}
lens1 = 0;
while (s1[lens1] != '\0')
{
	lens1++;
}
lens2 = 0;
while (s2[lens2] != '\0')
{
	lens2++;
}
res = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
if (res == NULL)
{
	return (NULL);
}
for (i = 0; i < lens1; i++)
{
	res[i] = s1[i];
}
for (p = 0; p < lens2; p++)
{
	res[i + p] = s2[p];
}
res[i + p] = '\0';
return (res);
}
