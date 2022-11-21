#include "main.h"

/**
  * create_file - creates a file.
  * @filename: Name of the file to create.
  * @text_content: NULL terminated string to write to the file.
  *
  * Return: 1 on success, -1 on failure (file cannot be created, file cannot
  * be written, write "fails", etc...).
  */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (errno == EEXIST)
	{
		close(fd);
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	else if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
