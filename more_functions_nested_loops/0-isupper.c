#include "main.h"

/**
  * _isupper - Checks for uppercase character
  * @parameterc: an integer that holds the ASCII value of a character.
  *
  * Description: Checks if character is uppercase looking its ASCII value.
  * Return: 1 if uppercase character, 0 otherwise.
  */
int _isupper(int c)
{
	if ((65 <= c) && (c <= 90))
		return (1);
	else
		return (0);
}
