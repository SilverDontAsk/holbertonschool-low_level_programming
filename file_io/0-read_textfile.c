#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: pointer to filename
 * @letters: actual number of letters it could read and print
 * Return: 0 if filename is NULL, file cant be opened/read and if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fildesc;
ssize_t bytesalr_read;
char *delay;
ssize_t bytes_written;
fildesc = open(filename, O_RDONLY);
if (fildesc == -1)
{
return (0);
}
delay = (char *)malloc(sizeof(char) * (letters + 1));
if (delay == NULL)
{
close(fildesc);
return (0);
}
bytesalr_read = read(fildesc, delay, letters);
if (bytesalr_read == -1)
{
close(fildesc);
free(delay);
return (0);
}
bytes_written = write(STDOUT_FILENO, delay, bytesalr_read);
if (bytes_written == -1 || bytes_written != bytesalr_read)
{
close(fildesc);
free(delay);
return (0);
}
free(delay);
close(fildesc);
return (bytesalr_read);
}
