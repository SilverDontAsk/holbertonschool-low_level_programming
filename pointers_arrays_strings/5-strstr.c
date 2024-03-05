#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring to find
 * Return: pointer to the substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
const char *h;
const char *n;
n = needle;
if (*n == 0)
{
	return (haystack);
}
for (; *haystack != 0; haystack += 1)
{
	if (*haystack != *n)
	{
		continue;
	}
	h = haystack;
	while (1)
	{
		if (*n == 0)
		{
			return (haystack);
		}
		if (*h++ != *n++)
		{
			break;
		}
	}
	n = needle;
}
return ('\0');
}
