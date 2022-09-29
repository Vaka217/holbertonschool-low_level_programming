#include "_putchar.c"

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
	return;
}
