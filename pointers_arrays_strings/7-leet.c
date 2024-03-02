#include "main.h"
/**
 * leet - encodes string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
int l, n;
char ls[] = "aAeEoOtTlL";
char ns[] = "4433007711";
for (l = 0; s[l] != '\0'; l++)
{
	for (n = 0; n < 10; n++)
	{
		if (s[l] == ls[n])
		{
			s[l] = ns[n];
		}
	}
}
return (s);
}
