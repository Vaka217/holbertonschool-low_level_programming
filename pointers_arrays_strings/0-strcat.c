#include "main.h"

/**
  *
  */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int src_count = 0;
	char *tmp = dest;
	char *tmp2 = src;

	while (*dest)
		dest++;
	while (*src++)
		src_count++;
	while (count < src_count)
	{
		*dest++ = *tmp2++;
		count++;
	}
	*dest = '\0';
	return (tmp);
}
