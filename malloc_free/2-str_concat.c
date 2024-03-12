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
int len1 = 0, len2 = 0;
char *res;
int i = 0, j = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[len1])
	len1++;
while (s2[len2])
	len2++;
j = len1 + len2;
res = malloc((sizeof(char) * j) +1);
if (res == NULL)
	return (NULL);
len2 = 0;
while (i < j)
{
	if (i <= len1)
		res[i] = s1[i];
	if (i >= len1)
	{
		res[i] = s2[len2];
		len2++;
	}
	i++;
}
res[i] = '\0';
return (res);
}
