#include "main.h"
/**
 * leet - encodes string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
char *ptr = s;
while (*ptr)
{
	if (*ptr == 'e' || *ptr == 'E')
		*ptr = '3';
	else if (*ptr == 'a' || *ptr == 'A')
		*ptr = '4';
	else if (*ptr == 'o' || *ptr == 'O')
		*ptr = '0';
	else if (*ptr == 't' || *ptr == 'T')
		*ptr = '7';
	else if (*ptr == 'l' || *ptr =='L')
		*ptr = '1';
	ptr++;
}
return (s);
}
