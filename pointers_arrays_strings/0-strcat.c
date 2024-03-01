#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		++dest;
	}
while (*src)
{
	*dest++ = *src++;
}
*dest = '\0';
return (dest);
}
