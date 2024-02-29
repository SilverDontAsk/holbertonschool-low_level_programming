#include "main.h"
/**
 * print_line - print a straight line
 * @n: number of times _ will be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int l;
for (l = 0; l < n; l++)
{
_putchar('_');
}
_putchar('\n');
}
}
