#include <stdio.h>
/**
 * main - use putchar to output a to z in lowercase
 *
 * Return: always 0
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
