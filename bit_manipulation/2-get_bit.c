#include "main.h"
/**
 * get_bit - gets the bit at a specific index
 * @n: number to search through
 * @index: position for where to look
 * Return: bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int b = 1UL << index;
if (index >= sizeof(n) * 8)
{
return (-1);
}
if (n & b)
{
return (1);
}
else
{
return (0);
}
}
