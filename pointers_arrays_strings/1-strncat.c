#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *end = dest;
int i;
while (*end != '\0')
{
	end++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
	end[i] = src[i];
}
end[i] = '\0';
return (dest);
}
