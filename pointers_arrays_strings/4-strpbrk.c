#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: acceptable bytes
 * Return: pointer to byte s that matches any in accept, null if none
 */
char *_strpbrk(char *s, char *accept)
{
const char *p;
while (*s)
{
	p = accept;
	while (*p)
	{
		if (*s == *p)
			return (s);
		p++;
	}
	s++;
}
return ('\0');
}
