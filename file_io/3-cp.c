#include "main.h"

/**
  *
  */

int main(int ac, char **av)
{
	int fd, wr, c;
	char *buf = malloc(1024);

	if (ac != 3)
	{
		exit(97);
		dprintf(2, "Usage: cp file_from file_to\n");
	}
	fd = open(av[1], O_RDONLY, 664);
	if (fd == -1)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
	}
	read(fd, buf, 1024);
	c = close(fd);
	if (c == -1)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %d\n", fd);
	}
	fd = open(av[2], O_CREAT | O_WRONLY | O_EXCL, 664);
	if (errno == EEXIST)
	{
		c = close(fd);
		if (c == -1)
		{
			exit(100);
			dprintf(2, "Error: Can't close fd %d\n", fd);
		}
		fd = open(av[2], O_WRONLY | O_TRUNC);
	}
	wr = write(fd, buf, 1024);
	if (wr == -1)
	{
		exit(99);
		dprintf(2, "Error: Can't read from file %s\n", av[2]);
	}
	c = close(fd);
	if (c == -1)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %d\n", fd);
	}
	return (0);
}
