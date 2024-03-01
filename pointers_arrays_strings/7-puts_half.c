#include "main.h"
#include <string.h>
/**
 * puts_half - print half of a string
 * @str - string to be printed in half
 */
void puts_half(char *str)
{
int l = 0;
int n;
while (str[l] !='\0')
{
l++;
}
if ( l % 2 == 1)
{
n = (l -1) / 2;
n +=1;
}
else
{
n = l / 2;
}
for (; n < l; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
