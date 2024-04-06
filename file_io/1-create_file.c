#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content - content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fildesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
size_t len = strlen(text_content);
ssize_t bytes_written;
if (filename == NULL)
{
return (-1);
}
if (fildesc == -1)
{
return (-1);
}
fchmod(fildesc, S_IRUSR | S_IWUSR);
if (text_content != NULL)
{
bytes_written = write(fildesc, text_content, len);
if (bytes_written == -1 || (size_t)bytes_written != len)
{
close(fildesc);
return (-1);
}
}
close(fildesc);
return (1);
}
