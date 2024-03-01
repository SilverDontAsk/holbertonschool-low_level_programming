#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other character of a string
 * @str: string to be printed
 * return: nothing
 */
void puts2(char *str)
{
int i;
int l = 0;
while (str[l] != '\0')
{
l++;
}
for (i = 0; i < l; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
