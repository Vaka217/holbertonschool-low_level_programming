#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * argstostr - concatenates all the arguments of the program.
  * @ac: Number of columns.
  * @av: Array of arguments.
  *
  * Return: NULL if ac is 0, av is NULL or s is NULL , otherwise returns s.
  */

char *argstostr(int ac, char **av)
{
	char *s = NULL;
	int count = 0, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ac = 0; av[ac] != NULL; ac++)
	{
		for (i = 0; av[ac][i] != '\0'; i++)
			count++;
		count++;
	}
	count++;

	s = malloc(count);

	if (s == NULL)
		return (NULL);
	for (ac = 0; av[ac] != NULL; ac++)
		printf("%s\n", av[ac]);
	return (s);
}
