#include "main.h"
#include <stdbool.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be changed
 * Return: capitalized string
 */
char *cap_string(char *str)
{
char *ptr = str;
bool firs_wor = true;
while (*ptr != '\0')
{
if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr > 'A' && *ptr <= 'Z'))
{
if (firs_wor)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
}
firs_wor = false;
}
}
else
{
firs_wor = true;
}
ptr++;
}
return (str);
}
