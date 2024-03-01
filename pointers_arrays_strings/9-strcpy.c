#include "main.h"
#include <string.h>
/**
 * _strcpy - copies string pointed to by src to dest
 * @src: string source
 * @dest: destination
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
char *star = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (star);
}
