#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * 0 if filename is NULL or if write fails or does not write the expected
 * amountof bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_bytes = read(fd, buf, letters);
	if (read_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buf, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (write_bytes);
}

