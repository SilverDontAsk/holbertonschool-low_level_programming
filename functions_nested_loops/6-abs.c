#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _abs - finds the absolute value of an integer
 * @c: this is what the abs will be found of
 *
 * Return: absolute number or zero
 */
int _abs(int c)
{
if (c < 0)
{
return (c * -1);
}
return (c);
}
