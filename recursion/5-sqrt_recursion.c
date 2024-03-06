#include "main.h"
#include <stdio.h>
int squarert(int n, int i);
/**
 * _sqrt-recursion - returns natural square root of n
 * @n: number to find square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (squarert(n, 1));
}
/**
 * squarert - calculates the natural square root
 * @n: number to calculate
 * @i iterate number
 * Return: natural square root
 */
int squarert(int n, int i)
{
int root = i * i;
if (root > n)
return (-1);
if (root == n)
return (i);
return (squarert(n, i + 1));
}
