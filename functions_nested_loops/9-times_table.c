#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
    int n, k;

    for (n = 0; n <= 9; n++)
    {
        for (k = 0; k <= 9; k++)
        {
            int r = n * k;

            if (r < 10 && k != 0)
            {
                _putchar(' ');
            }

            if (k != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (r < 10)
            {
                _putchar(' ');
            }

            if (r >= 10)
            {
                _putchar(r / 10 + '0');
            }
            _putchar(r % 10 + '0');
        }
        _putchar('\n');
    }
}
