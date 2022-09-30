#include "main.h"
#include "_print_to_98.c"

/**
 * _98 - prints all integer numbers from n to 98, followed by a new line.
 *
 * Description: Prints all integer numbers from n to 98, being 'n' the int
 * parameter of print_to_98, which uses printf to do this, depending if the
 * n number is higher or lower than 98.
 * Return: Always 0.
 */
int _98(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
