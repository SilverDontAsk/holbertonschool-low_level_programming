#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by newline
 * @separator: separator
 * @n: numbers
 * Return: print numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list p;
unsigned int i;

va_start(p, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(p, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(p);
printf("\n");
}
