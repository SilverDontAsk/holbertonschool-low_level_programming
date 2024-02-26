#include "main.h"
/**
 * print_most_numbers - print 0 to 9 followed by new line and exclude 2 and 4
 * Return: always 0
 */
void print_most_numbers(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
{
if (ch != 2 && ch != 4)
{
_putchar(ch + '0');
}
}
_putchar('\n');
}
