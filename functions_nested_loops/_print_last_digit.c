#include "_abs.c"
int print_last_digit(int l)
{
	_putchar((_abs(l % 10)) + '0');
	return (_abs(l % 10));
}
