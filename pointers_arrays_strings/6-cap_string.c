#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be changed
 * Return: capitalized string
 */
char *cap_string(char *str)
{
int i = 0;
char separators[] = " \t\n,;.!?\"(){}[]";
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
	if (i == 0 || strchr(separators, str[i - 1]))
	{
		str[i] -= 32;
	}
}
i++;
}
return (str);
}
