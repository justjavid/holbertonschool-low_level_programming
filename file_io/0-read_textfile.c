#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024];
	ssize_t BRead, BWrite;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR, S_IROTH);
	if (fd == -1)
		return (0);
	BRead = read(fd, buffer, letters);
	if (BRead == -1)
		return (0);
	BWrite = write(STDOUT_FILENO, buffer, (long unsigned int) BRead);
	if (BWrite == -1)
		return (0);
	close(fd);
	return (BWrite);
}
