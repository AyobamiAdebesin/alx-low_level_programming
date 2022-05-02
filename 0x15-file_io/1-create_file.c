#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to be created
 * @text_content: The content of the file 
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename 
