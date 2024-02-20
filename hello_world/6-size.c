#include <stdio.h>

/**
 * main - just the entry point for the program
 *
 * Description: Print the size of various types on the computer it is compiled and run on
 *
 * Return: 0 (If 0= success)
 */
int main(void)

{
/**
 *
 * Using a metric load of printf to print out various types
 *
 */
printf("Size of a char: %lu\n byte(s)", sizeof(char));
printf("Size of an int: %lu\n byte(s)", sizeof(int));
printf("Size of a long int: %lu\n byte(s)", sizeof(long int));
printf("Size of a long long int: %lu\n byte(s)", sizeof(long long int));
printf("Size of a float: %lu\n byte(s)", sizeof(float));

return (0);
}
