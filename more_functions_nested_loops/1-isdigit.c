#include "main.h"

/**
  * _isdigit - Checks for digit character
  * @c: an integer that holds the ASCII value of a character.
  *
  * Description: Checks if character is a digit looking its ASCII value.
  * Return: 1 if digit character, 0 otherwise.
  */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
