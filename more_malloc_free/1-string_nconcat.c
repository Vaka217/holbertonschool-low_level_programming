#include "main.h"
#include <stdlib.h>

/**
  *
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = NULL;
	unsigned int i, len, len2, buffer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len] != '\0'; len++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if (len2 > n)
		len2 = n;
	else
		n = len2;
	buffer = len + len2 + 1;
	s3 = malloc(buffer * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < buffer - 1; i++)
	{
		if (i < len)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - len];
	}
	s3[buffer] = '\0';
	return (s3);
}
