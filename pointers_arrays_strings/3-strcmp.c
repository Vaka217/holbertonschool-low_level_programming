#include "main.h"

/**
  * _strcmp - compares two strings.
  * @s1: String parameter.
  * @s2: String parameter to compare.
  *
  * Description: Compares two strings by bytes.
  * Return: 15 if s1 is greater than s2, -15 if s1 is lesser and 0 if both are
  * equal.
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		if (*s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
