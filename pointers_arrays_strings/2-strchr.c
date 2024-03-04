#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be found
 * Return: pointer to the first occurence of character c in s, null if not found
 */
char *_strchr(char *s, char c)
{
do
{
if (*s == c)
return (s);
}
while (*s++);
return ('\0');
}
