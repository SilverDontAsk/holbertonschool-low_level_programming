#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024

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
int close_errchk(int fd)
{
int err = close(fd);
if (err == -1) {
p_error_and_exit(100, "Can't close file descriptor %d", fd);
}
return err;
}
void read_err(int src_fd, int dest_fd, const char *src_file)
{
close_errchk(src_fd);
close_errchk(dest_fd);
p_error_and_exit(98, "Can't read from file %s", src_file);
}
void write_err(int src_fd, int dest_fd, const char *dest_file)
{
close_errchk(src_fd);
close_errchk(dest_fd);
p_error_and_exit(99, "Can't write to file %s", dest_file);
}
void copy_file(const char *src_file, const char *dest_file)
{
int src_fd = open(src_file, O_RDONLY);
int dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
char *buffer = malloc(BUFFER_SIZE);
ssize_t bytes_r, bytes_w;
if (src_fd == -1) {
p_error_and_exit(98, "Can't read from file %s", src_file);
}
if (dest_fd == -1) {
close_errchk(src_fd);
p_error_and_exit(99, "Can't write to file %s", dest_file);
}
if (buffer == NULL) {
close_errchk(src_fd);
close_errchk(dest_fd);
p_error_and_exit(99, "Memory allocation failed");
}
while ((bytes_r = read(src_fd, buffer, BUFFER_SIZE)) > 0) {
bytes_w = write(dest_fd, buffer, bytes_r);
if (bytes_w == -1 || bytes_w != bytes_r) {
free(buffer);
write_err(src_fd, dest_fd, dest_file);
}
}
if (bytes_r == -1) {
free(buffer);
read_err(src_fd, dest_fd, src_file);
}
free(buffer);
close_errchk(src_fd);
close_errchk(dest_fd);
}
int main(int argc, char *argv[])
{
const char *file_from, *file_to;
if (argc != 3) {
p_error_and_exit(97, "Usage: %s file_from file_to", argv[0]);
}
file_from = argv[1];
file_to = argv[2];
copy_file(file_from, file_to);
return 0;
}
