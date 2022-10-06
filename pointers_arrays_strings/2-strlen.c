#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string parameter
  *
  * Description: Counts each byte of the string, and that counts the length
  * of the string.
  * Return: Length of a string.
  */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
		count++;
	return (count);
}
