#include "main.h"
#include <stdio.h>
/**
 * main - Checks for uppercase letter
 *
 * Description: Prints the character and 1 if its uppercase and
 * 0 otherwise.
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
