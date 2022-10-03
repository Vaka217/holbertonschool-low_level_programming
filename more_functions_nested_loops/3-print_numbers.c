#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * @n - for counter
 *
 * Description: putchar prints the value of the char variable n, n initialize
 * with '0' value and the for statement iterates until n ends with '9' value
 * and uses putchar with each value of n.
 * Return: void.
 */
void print_numbers(void)
{
	char n;

	for (n = '0' ; n <= '9' ; n++)
		_putchar(n);
	_putchar('\n');
}
