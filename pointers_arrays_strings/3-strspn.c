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
	unsigned int count = 0, i = 0, lens = 0, lenaccept = 0;

	while (*s++)
		lens++;
	while (*accept++)
		lenaccept++;
	for (i = 0; i < lens; i++)
	{
		if (count == lenaccept)
			return (count + 1);
		if (s[i] == accept[count])
			count++;
	}
	return (count);
}
