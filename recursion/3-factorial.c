#include "main.h"
/**
 * factorial - returns factorial of given number
 * @n: numbers
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
