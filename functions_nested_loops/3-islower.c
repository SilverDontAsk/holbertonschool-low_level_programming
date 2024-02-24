#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 *
 * @c - is the character that will be checked
 *
 * Return 1 if lowercase character or 0 if uppercase
 */
int _islower(int c)

{
if ((c >= 0  && c <= 108) || (c >= 'a' && c <= 'z'))
{
return(1);
} else if (c >= 'A' && c <= 'Z')
{
return(0);
}
return(0);
}
