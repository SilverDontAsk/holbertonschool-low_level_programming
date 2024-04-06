#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * appent_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fildes;
size_t len;
ssize_t bytes_written;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
fildes = open(filename, O_WRONLY | O_APPEND);
if (fildes == -1) {
return -1;
}
len = strlen(text_content);
bytes_written = write(fildes, text_content, len);
close(fildes);
if (bytes_written == -1 || (size_t)bytes_written != len) {
return -1;
}
return 1;
}
