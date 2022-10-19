#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  *
  */

char *str_concat(char *s1, char *s2)
{
	char *s3 = NULL;
	size_t i, j, w = 0;

	s3 = malloc(strlen(s1) + strlen(s2));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1) - 1; i++)
		s3[i] = s1[i];
	for (j = i; j < strlen(s1) + strlen(s2); j++)
	{
		s3[j] = s2[w];
		w++;
	}
	/*s3[j + 1] = '\0';*/
	return (s3);
}
