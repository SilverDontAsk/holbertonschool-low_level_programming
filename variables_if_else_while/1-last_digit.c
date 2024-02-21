#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point of the program
 *
 * Description - finding the last digit of a random number
 *
 * Return: 0 (If 0, success)
 */
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/**
 * if - finds if last digit is bigger than 5
 *
 * else if 1 - finds if lastdigit = 0
 *
 * else if 2 -  finds if lastdigit is less than 6 but not 0
 * lastDigit: calculate the last digit of n
 */
lastDigit = n % 10;

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
