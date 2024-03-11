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
char *rst = malloc(strlen(s1) + strlen(s2) + 1);
int n, i = 0;
for (n = 0; (rst[i] = s1[n]) != '\0'; ++n, ++i) {}
for (n = 0; (rst[i] = s2[n]) != '\0'; ++n, ++i) {}
return (rst);
}
