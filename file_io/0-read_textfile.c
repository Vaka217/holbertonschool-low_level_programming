#include "main.h"

/**
  * read_textfile -  reads a text file and prints it to the POSIX stdout.
  * @filename: Name of the file to read and print.
  * @letters: Number of letters it should read and print.
  *
  * Return: The number of letters it could read and print or 0 if the file
  * cannot be opened or read, if filename is NULL, or if write fails or does
  * not write the expected amount of bytes.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, rd;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	if (!buf)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	buf[letters + 1] = '\0';
	close(fd);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	free(buf);
	return (rd);
}
