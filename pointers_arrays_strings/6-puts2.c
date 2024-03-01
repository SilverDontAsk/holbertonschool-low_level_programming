#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other character of a string
 * @str: string to be printed
 * return: nothin
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str+=2;
}
_putchar('\n');
}
