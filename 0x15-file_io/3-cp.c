#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0 on success, 97 on wrong number of arguments, 98 on read error
 *
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2],
		     O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR |
		     S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (argc == 4)
	{
		if (argv[3][0] != '1')
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((rd = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr != rd || wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]),
		    exit(98);
	if (close(fd_from) == -1)

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
