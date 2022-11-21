#include "main.h"

/**
  *
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr;
	char *buf = malloc(letters);

	if (!buf || !filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, letters);
	if (wr == -1)
		return (0);
	close(fd);
	return (wr);
}
