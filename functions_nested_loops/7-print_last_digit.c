#include "main.h"
#include "_print_last_digit.c"
/**
 * lastd - Prints the last digit of a number.
 *
 * Description: Takes an integer r and the function print_last_digit takes the
 * absolute value of r and prints its last digit.
 * Return: Always 0.
 */
int lastd(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
