#include "main.h"
#include <string.h>
/**
 * *_strcpy - copies string pointed to by src to dest
 * @src: string source
 * @dest: destination
 * return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return start;
}
