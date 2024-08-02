#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t BRead, BWrite;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	BRead = read(fd, buffer, letters);
	close(fd);
	if (BRead == -1)
	{
		free(buffer);
		return (0);
	}
	BWrite = write(STDOUT_FILENO, buffer, BRead);
	free(buffer);
	if (BWrite == -1 || BWrite != BRead)
		return (0);
	return (BWrite);
}
