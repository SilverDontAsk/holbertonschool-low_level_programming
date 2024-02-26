#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: number of times _ will be printed
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int l, s;
for (l = 0; l < n; l++)
{
	for(s = 0; s < l; s++)
	{
		_putchar(' ');
	}
_putchar('\\');
_putchar('\n');
}
}
}

