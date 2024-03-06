#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - finds if number is a prume number
 * @n: number to search
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int i;
	if (n <= 1)
		return (0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
