#include "main.h"
/**
 * sqrt_recursion - function to help find the square root recursively
 * @start: lower bound of search
 * @end: upper bound of search
 * @n: number to find to square root of
 * Return: square root of n
 */
int sqrt_recursion(int n, int start, int end)
{
int mid = start + (end - start) / 2;
long square;
if (n < 0)
{
return (-1);
}
if (start > end)
{
return (-1);
}
square = mid * mid;
if (square == n)
{
return (mid);
}
else if (square < n)
{
return (sqrt_recursion(n, mid + 1, end));
}
else
{
return (sqrt_recursion(n, start, mid - 1));
}
}
/**
 * _sqrt_recursion - returns natural square root
 * @n: number to find the square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
return (sqrt_recursion(n, 0, n));
}
