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

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, strlen(text_content));
	return (1);
}
