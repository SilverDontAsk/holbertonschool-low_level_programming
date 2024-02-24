#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_sign - prints sign of the number
 *
 * @n: what will be checked
 *
 * Return: + if greater than 0, 0 if 0, - for anythin else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
