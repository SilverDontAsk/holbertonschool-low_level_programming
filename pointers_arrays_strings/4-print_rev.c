#include "main.h"
#include <string.h>
/**
 * print_rev - prints the string in reverse
 * @s: string to reverse
 * Return: nothin
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
	i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
