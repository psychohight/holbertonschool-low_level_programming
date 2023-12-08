#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_error_and_exit(int code, const char *message, const char *arg)
{
	dprintf(2, message, arg);
	exit(code);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFSIZ];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	}
	while ((bytes_read = read(fd_from, buffer, BUFSIZ)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
		}
	}
	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
}
int main(int argc, char **argv)
{
	if (argc != 3)
		print_error_and_exit(97, "Usage: %s file_from file_to\n", argv[0]);

	copy_file(argv[1], argv[2]);

	return (0);
}
