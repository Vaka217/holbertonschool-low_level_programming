#include "main.h"

/**
  * *_strchr - locates a character in a string.
  * @s: String where we find..
  * @c: Character to locate.
  *
  * Description: Locates the first occurrence of a character in a string.
  * Return: A pointer to the first occurence of the chracter in the string
  * or NULL if the character is not found.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept [j])
					count++;
			}
		}
		else
			return (count);
	}
	return (count);
}
