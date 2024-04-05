#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to turn into binaru
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
int f = 1;
unsigned long int b = 1UL << (sizeof(n) * 8 - 1);
if (n == 0)
{
_putchar('0');
return;
}
while ((b & n) == 0)
{
b >>= 1;
f++;
}
while (b != 0)
{
_putchar((n & b) ? '1' : '0');
b >>= 1;
}
}
