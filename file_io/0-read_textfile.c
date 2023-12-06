
#include "main.h"
/**
 * read_textfile - check the code
 * @filename: nbr
 * @letters: nbr
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t read_count;
	int file_descriptor;

	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		close(file_descriptor);
		return (0);
	}
	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	read_count = read(file_descriptor, buffer, letters);

	if (read_count == -1)
	{
		close(file_descriptor);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, read_count) == -1)
	{
		return (0);
		free(buffer);
	}

	free(buffer);
	close(file_descriptor);
	return (read_count);
}
