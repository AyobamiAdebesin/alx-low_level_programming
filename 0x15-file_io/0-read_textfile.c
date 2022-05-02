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
	char *buf;
	ssize_t count1;

	if (filename == NULL)
		return (0);

	fd  = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	read(fd, buf, letters);
	count1 = write(STDOUT_FILENO, buf, letters);

	if (!count1)
		return (0);
	close(fd);
	return (count1);
}
