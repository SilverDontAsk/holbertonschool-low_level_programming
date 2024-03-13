#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: pointer to newly allocated space in memory and combined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, o;
char *res;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
res = malloc((len1 + (n >= len2 ? len2 : n) + 1) * sizeof(char));
if (res == NULL)
return (NULL);
for (i = 0; i < len1; i++)
res[i] = s1[i];
for (o = 0; o < (n >= len2 ? len2 : n); o++)
res[i++] = s2[o];
res[i] = '\0';
return (res);
}
