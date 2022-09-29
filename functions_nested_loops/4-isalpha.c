#include "main.h"
#include "_isalpha.c"
/**
 * alpha - Checks for lowercase and uppercase characters.
 *
 * Description: Checks for lowercase and uppercase characters. Prints '1' if is
 * lowercase or uppercase and '0' otherwise.
 * Return: 0 or 1 depending on isalpha(), and then returns 0.
 */
int alpha(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
