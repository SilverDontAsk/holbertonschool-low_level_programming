#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int l = 0;
char *e = s;
char temp;
while (*e != '\0') 
{
l++;
e++;
}
e--;
while (s < e)
{
temp = *s;
*s = *e;
*e = temp;
s++;
e--;
}
}
