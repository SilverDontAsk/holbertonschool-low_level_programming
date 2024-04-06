#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * appent_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	if (file == NULL)
	{
		return (-1);
	}
	if (fprintf(file, "%s", text_content) < 0)
	{
		fclose(file);
		return(-1);
	}
	fclose(file);
	return (1);
}
