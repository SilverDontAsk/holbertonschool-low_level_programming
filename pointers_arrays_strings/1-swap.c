#include "main.h"
/**
 * swap_int - swap a and b values
 * @a: swap with b
 * @b: swap with a
 * Return: nothin
 */
void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
