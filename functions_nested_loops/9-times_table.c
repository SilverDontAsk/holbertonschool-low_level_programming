#include "main.h"
#include <stdio.h>
#include <time.h>

void times_table(void)
{
int n, k;
for ( n = '0'; n <= 9; n++)
{
for ( k = '0'; k <= 9; k++)
{
_putchar(n * k + '0');
if (k !=9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
