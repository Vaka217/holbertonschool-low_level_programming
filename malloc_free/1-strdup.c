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

	for (j = 0; str[j] != '\0'; j++)
	{
	}

	j++;
	dup = malloc(sizeof(char) * j);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		dup[i] = str[i];
	return (dup);
}
