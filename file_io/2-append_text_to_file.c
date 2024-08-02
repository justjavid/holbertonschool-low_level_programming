#include "main.h"

/**
 *  append_text_to_file - appends text at the end of file
 *  @filename: name of file
 *  @text_content: string to append at the end of the file
 *  Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t BWrite;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[i])
		i++;
	BWrite = write(fd, text_content, i - 1);
	if (BWrite == i - 1)
	{
		close(fd);
		return (1);
	}
	return (-1);
}
