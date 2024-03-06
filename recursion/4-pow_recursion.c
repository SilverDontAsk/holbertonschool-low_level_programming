#include "main.h"
/**
 * _pow_recursion - raise x to the power y
 * @x: number to be raised
 * @y: number to raise by
 * Return: result of raising x to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
else if (y == 0)
{
	return (1);
}
else
{
	return (x * _pow_recursion(x, y - 1));
}
}
