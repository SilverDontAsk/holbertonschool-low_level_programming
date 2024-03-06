#include "main.h"
#include <stdio.h>
/**
 * prime_recursion - checks if number is prime
 * @n: number to check
 * @divi: divisor tested
 * Return: 1 if prime, 0 if not
 */
int prime_recursion(int n, int divi);
/**
 * is_prime_number - finds if number is a prime number
 * @n: number to search
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
return (prime_recursion(n, 2));
}
/**
 * prime_recursion - checks if number is prime
 * @n: number to check
 * @divi: divisor tested
 * Return: 1 if prime, 0 if not
 */
int prime_recursion(int n, int divi)
{
if (n <= 1)
return (0);
if (divi * divi > n)
return (1);
if (n % divi == 0)
return (0);
return (prime_recursion(n, divi + 1));
}
