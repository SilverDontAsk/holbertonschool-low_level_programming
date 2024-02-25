#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
int n, k, r, m, l;

for (n = 0; n <= 9; n++)
{
for (k = 0; k <= 9; k++)
{
r = n * k;
if (r > 9)
{
l = r % 10;
m = (r - l) / 10;
_putchar(44);
_putchar(32);
_putchar(m + '0');
_putchar(l + '0');
}
else
{
if (k != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(r + '0');
}
}
_putchar('\n');
}
}
