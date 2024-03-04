#include "main.h"
/**
 * _strspn - gets the length of the prefix substring
 * @s: string 
 * @accept: only the bytes of this should be read
 * Return: number of bytes in initial segment of s that have bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
while (*s && _strchr(accept, *s++))
	i++;
return (i);
}
