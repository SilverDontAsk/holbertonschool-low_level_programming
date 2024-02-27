#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int l, h;
	for (l = 1; l <= size; ++l)
	{
		for (h = l; h <= size; ++h)
		{
			_putchar(' ');
		}
		for (h = 1; h <= l; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
