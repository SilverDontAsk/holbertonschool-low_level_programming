#include <stdio.h>
/**
 * main - use putchar to output the alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
char ch = 'z';
for (ch = 'z'; ch >= 'a'; --ch)
putchar(ch);
putchar('\n');
return (0);
}
