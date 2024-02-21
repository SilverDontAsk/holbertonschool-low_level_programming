#include <stdio.h>
/**
 * main - use putchar to output 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
char n = '0';
for (n = '0'; n <= '9'; n = n + 1)
putchar(n);
putchar('\n');
return (0);
}
