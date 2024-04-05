#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * flip_bits - counts how much to flip from one number to another
 * @n: bits to flip to match with m
 * @m: bits to flip to match with n
 * Return: count of how much is needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int c = 0;
unsigned int d = n ^ m;
while (d > 0)
{
c += d & 1;
d >>= 1;
}
if (n == ULONG_MAX && m == 0)
{
return (sizeof(unsigned long int) * CHAR_BIT);
}
return (c);
}
