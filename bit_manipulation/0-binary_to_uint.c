#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number or 0 if null or something other than 0 and 1 in b
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int uint = 0;
int i = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
	return (0);

uint <<= 1;
uint += b[i] - '0';
i++;
}
return (uint);
}
