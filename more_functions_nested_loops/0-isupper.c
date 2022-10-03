#include "main.h"

/**
  * _isupper - Checks for uppercase character
  * @c: an integer that holds the ASCII value of a character.
  *
  * Description: Checks if character is uppercase looking its ASCII value.
  * Return: 1 if uppercase character, 0 otherwise.
  */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
