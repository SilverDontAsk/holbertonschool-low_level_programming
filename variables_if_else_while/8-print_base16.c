#include <stdio.h>
/**
 * main - print all base 16 characters
 *
 * Return: Always 0
 */
int main(void)
{
char ch = 'a';
char n = '0';

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
