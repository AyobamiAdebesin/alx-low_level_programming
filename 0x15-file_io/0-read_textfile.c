#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output
 * @filename: File from which to read text
 * @letters: Number of letters to read
 *
 * Return: The actual number of letters it could read/print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int count;

	if (filename == NULL)
		return (0);

	fd  = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);
	count = read(fd, 1, letters);

	return (count);
}
