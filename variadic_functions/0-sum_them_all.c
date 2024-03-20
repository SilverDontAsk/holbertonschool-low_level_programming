#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all of its paremeters
 * @n: parameter to sum
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i;
	va_list p;

	va_start (p, n);
	for (i = 0; i <= n; i++)
		s += va_arg(p, int);
	va_end(p);
	return (s);
}
