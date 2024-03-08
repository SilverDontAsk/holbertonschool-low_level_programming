#include <stdio.h>
#include <libgen.h>
/**
 * main - print its own name
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf ("./%s\n", basename(argv[0]));
	}
	return (0);
}
