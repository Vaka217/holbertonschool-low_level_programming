#include "main.h"

/**
  * counting - gives the length of the string.
  * @s: String parameter.
  *
  * Return: The length of the string given or 0 if the string is void.
  */

int counting(char *s)
{
	if (*s)
	{
		s++;
		return (1 + counting(s));
	}
	return (0);
}

/**
  * check - compare extreme by extreme of the string to see if its a palindrome
  * @s: String parameter.
  * @length: Length of the string given.
  * @counter: Intenger from 0 to length.
  *
  * Return: 1 if s is a palindrome or 0 if not.
  */

int check(char *s, int length, int counter)
{
	if (counter >= length)
		return (1);
	if (s[length] == s[counter])
		return (check(s, length - 1, counter + 1));
	else
		return (0);
}

/**
  * is_palindrome - returns 1 if the string given is a palindrome or 0 if not.
  * @s: String parameter.
  *
  * Return: 1 if the string is a palindrome or 0 otherwise.
  */

int is_palindrome(char *s)
{
	int length = counting(s), counter = 0;

	return (check(s, length - 1, counter));
}
