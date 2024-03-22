#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct formatter - structure to hold format specifiers
 * @h: format specifier
 * @print: pointer to function to print
 */
typedef struct formatter
{
char h;
void (*print)(va_list *);
} frm;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char *s);
#endif
