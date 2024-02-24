#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - checks for letters, lowercase or uppercase
 *
 * @c: variable that will be checked
 *
 * Return: 1 if letter, lower or upper case, 0 if otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
