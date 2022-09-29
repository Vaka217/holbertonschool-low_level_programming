#include "main.h"
#include "_sign.c"

/**
 * sign - Prints the sign of a number..
 *
 * Description: With if statements evaluates if the number is greater than 0,
 * less than 0 or 0.
 * Return: If the number is greater than 0, returns 1.
 * If its less than 0, returns -1.
 * If its 0, returns 0..
 */
int sign(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
