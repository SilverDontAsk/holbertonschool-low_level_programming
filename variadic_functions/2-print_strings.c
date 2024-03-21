#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separator between outputs
 * @n: number of strings passed into the function
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list s;
unsigned int i;
const char *strin;
va_start(s, n);
for (i = 0; i < n; i++)
{
strin = va_arg(s, const char *);
if (strin == NULL)
{
printf("(nil)");
}
if (strin != NULL)
{
printf("%s", strin);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
}
va_end(s);
printf("\n");
}
		
