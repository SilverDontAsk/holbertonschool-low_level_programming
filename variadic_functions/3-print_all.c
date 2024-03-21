#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
typedef struct formatter {
char h;
void (*print)(va_list*);
} frm;
void print_char(va_list *arg) {
printf("%c", va_arg(*arg, int));
}
void print_int(va_list *arg) {
printf("%d", va_arg(*arg, int));
}
void print_float(va_list *arg) {
printf("%f", va_arg(*arg, double));
}
void print_string(va_list *arg) {
char *h = va_arg(*arg, char *);
if (h == NULL) {
printf("(nil)");
return;
}
printf("%s", h);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: anything
 */
void print_all(const char * const format, ...)
{
frm f[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}};
const char *separator = "";
int i, j;
va_list arg;
va_start(arg, format);
if (format == NULL)
{
	return;
}
for (i = 0; format[i] != '\0'; ++i)
{
for (j = 0; f[j].h; j++)
{
if (f[j].h == format[i])
{
printf("%s", separator);
f[j].print(&arg);
separator = ", ";
break;
}
}
}
printf("\n");
va_end(arg);
}
