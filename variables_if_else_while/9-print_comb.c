#include <stdio.h>
/**
 * main - print 0 to 9 with comma and space
 *
 * Return: always 0
 */
int main(void)
{
int n = '0';
int c = ',';
int s = ' ';

for (n = '0'; n <= '9'; n = n + 1)
putchar(n);
putchar(c);
putchar(s);
putchar('\n');
return (0);
}
