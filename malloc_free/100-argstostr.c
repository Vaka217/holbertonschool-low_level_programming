#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *
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
	}

	s = malloc(count);

	for (ac = 0; av[ac] != NULL; ac++)
		printf("%s\n", av[ac]);
	return (s);
}
