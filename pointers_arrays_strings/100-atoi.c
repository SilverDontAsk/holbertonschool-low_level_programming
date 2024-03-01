#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: converted integers
 */
int _atoi(char *s)
{
int sig = 1;
unsigned int n = 0;
do {
if (*s == '-')
sig *= -1;
else if (*s >= '0' && *s <= '9')
n = (n * 10) + (*s - '0');
else if (n > 0)
break;
} while (*s++);
return (n *sig);
}
