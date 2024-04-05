#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets a bit at index to 0
 * @n: the binary of which to modify
 * @index: place in the binary string to edit
 * Return: result of the bit change
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = ~(1UL << index);
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= mask;
return (1);
}
