#include "main.h"

/**
 *  create_file - creates a file
 *  @filename: name of file
 *  @text_content: string to write the file
 *  Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t BWrite;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[i])
		i++;
	BWrite = write(fd, text_content, i);
	if (BWrite == -1)
		return (-1);
	close(fd);
	return (1);
}
