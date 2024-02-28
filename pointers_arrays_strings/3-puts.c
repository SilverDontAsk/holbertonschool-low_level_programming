#include "main.h"
/**
 * _puts - prints a string followed by newline
 * @str: string to be printed
 * return: nothin
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
