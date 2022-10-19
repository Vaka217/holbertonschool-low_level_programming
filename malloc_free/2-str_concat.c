#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *
  */

char *str_concat(char *s1, char *s2)
{
	char *s3 = NULL;
	int i, j, w = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2= "";
	s3 = malloc(sizeof(char) * strlen(s1) * strlen(s2));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = i; s2[w] != '\0'; j++)
	{
		s3[j] = s2[w];
		w++;
	}
	s3[j + 1] = '\0';
	return (s3);
}
