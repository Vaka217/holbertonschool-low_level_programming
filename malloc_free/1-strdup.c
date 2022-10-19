#include "main.h"
#include <stdlib.h>

/**
  *
  */

char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (j = 0; j <= *str; j++)
	{
	}

	j += 1;
	dup = malloc(sizeof(char) * j);

	for (i = 0; i < j; i++)
		dup[i] = str[i];

	if (dup == NULL)
		return (NULL);

	return (dup);
}
