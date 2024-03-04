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
unsigned int c = 0;
const char *ps;
while (*s)
{
	i = 0;
	ps = accept;
	while (*ps)
	{
		if (*ps == *s)
		{
			i = 1;
			break;
		}
		ps++;
	}
	if (!i)
		break;
	c++;
	s++;
}
return (c);
}

