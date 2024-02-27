#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int n, h;
	for (n = 1; n <= size; n++)
	{
		for (h = 1; h <= size; h++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	}
}
