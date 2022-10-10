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
	int count1 = 0;
	int count2 = 0;

	while (*s1++)
		count1++;
	while (*s2++)
		count2++;
	if (count1 < count2)
		return (-15);
	else if (count1 > count2)
		return (15);
	else
		return (0);
}
