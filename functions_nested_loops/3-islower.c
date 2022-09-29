#include "main.h"
#include "_islower.c"

/**
 * lower - Checks for lowercase character.
 *
 * Description: Checks for lowercase character and prints '1' if is lowercase
 * and '0' otherwise.
 * Return: 0 or 1 depending on islower(), and then returns 0.
 */
int lower(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
