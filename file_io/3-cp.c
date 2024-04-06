#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024
/**
 * p_error_exit - prints error message and exit with the given exit code
 * @exit_code: exit code to exit with
 * @format: how function is written
 * Return: nothing
 */
void p_error_and_exit(int exit_code, const char *format, ...)
{
va_list args;
va_start(args, format);
dprintf(2, "Error: ");
vdprintf(2, format, args);
dprintf(2, "\n");
va_end(args);
exit(exit_code);
}
/**
 * copy_file - function to copy file
 * @src_file: source file to copy from
 * @dest_file: where to copy to
 * Return: nothing
 */
void copy_file(const char *src_file, const char *dest_file)
{
int src_fd = open(src_file, O_RDONLY);
int dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
char *b = malloc(BUFFER_SIZE);
ssize_t bytes_r, bytes_w;
int e_code = 0;
if (src_fd == -1)
{
p_error_and_exit(98, "Can't read from file %s", src_file);
}
if (dest_fd == -1)
{
close(src_fd);
p_error_and_exit(99, "Can't write to file %s", dest_file);
}
if (b == NULL)
{
close(src_fd);
close(dest_fd);
p_error_and_exit(99, "Memory allocation failed");
}
while ((bytes_r = read(src_fd, b, BUFFER_SIZE)) > 0)
{
bytes_w = write(dest_fd, b, bytes_r);
if (bytes_w == -1 || bytes_w != bytes_r)
{
e_code = 99;
break;
}
}
if (bytes_r == -1)
{
e_code = 98;
}
free(b);
close(src_fd);
close(dest_fd);
if (e_code != 0)
{
p_error_and_exit(e_code, "Error occurred during file copy");
}
}
/**
 * main - processes the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: copied files
 */
int main(int argc, char *argv[])
{
const char *file_from = argv[1];
const char *file_to = argv[2];
if (argc != 3)
{
p_error_and_exit(97, "Usage: %s file_from file_to", argv[0]);
}
copy_file(file_from, file_to);
return (0);
}
