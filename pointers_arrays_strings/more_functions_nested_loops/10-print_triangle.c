#include "main.h"
/**
 * print_triangle - prints a left angle triangle
 * @size: size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
int l, h, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (l = 0; l < size; l++)
{
for (h = size - l; h > 1; h--)
{
_putchar(' ');
}
for (j = 0; j <= l; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
