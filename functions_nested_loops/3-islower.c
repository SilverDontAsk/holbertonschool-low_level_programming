#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 *
 * @c: character that will be checked
 *
 * Return: 1 if lowercase character or 0 if uppercase
 */
int _islower(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
