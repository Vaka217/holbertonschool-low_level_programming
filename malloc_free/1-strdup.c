#include "main.h"
#include <stdlib.h>

/**
  *
  */

char *_strdup(char *str)
{
	char *dup = NULL;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	for (j = 0; j <= *str; j++)
	{
	}
	j++;
	dup = malloc(sizeof(char) * j);
	for (i = 0; i < j; i++)
		dup[i] = str[i];
	if (dup == NULL)
		return (NULL);
	return (dup);
}
