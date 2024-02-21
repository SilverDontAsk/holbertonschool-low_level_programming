#include <stdio.h>
/**
 * main - use putchar to output a to z in lowercase
 *
 * Return: always 0
 */
int main(void)
{
char ch = 'a';
char CH = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
for (CH = 'A'; CH <= 'Z'; CH++)
putchar(ch);
putchar(CH);
putchar('\n');
return (0);
}
