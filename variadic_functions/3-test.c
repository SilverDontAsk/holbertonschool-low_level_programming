#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - Print a character argument
 * @arg: Argument list
 */
void print_char(va_list arg)
{
printf("%c", va_arg(arg, int));
}
/**
 * print_int - Print an integer argument
 * @arg: Argument list
 */
void print_int(va_list arg)
{
printf("%d", va_arg(arg, int));
}
/**
 * print_float - Print a float argument
 * @arg: Argument list
 */
void print_float(va_list arg)
{
printf("%f", va_arg(arg, double));
}
/**
 * print_string - Print a string argument
 * @arg: Argument list
 */
void print_string(va_list arg)
{
char *h = va_arg(arg, char *);
(h == NULL) ? printf("(nil)") : printf("%s", h);
}
/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
void (*print_functions[4])(va_list) = {print_char, print_int,
print_float,
print_string
};
const char *separator = "";
int i = 0, j = 0;
va_list arg;
va_start(arg, format);
if (format == NULL)
{
printf("\n");
va_end(arg);
return;
}
while (format[i])
{
char cspec = format[i];
switch (cspec)
{
case 'c': case 'i': case 'f': case 's':
while (j < 4)
{
if (cspec == "cifs"[j])
{
printf("%s", separator);
print_functions[j](arg);
separator = ", ";
break;
}
j++;
}
j = 0;
break;
default:
break;
}
i++;
}
printf("\n");
va_end(arg);
}
