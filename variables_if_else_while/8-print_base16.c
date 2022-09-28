#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase.
 *
 * Description: The for statement iterates from 0 to 9, printing each number.
 * After that, another for iterates from 'a' to 'f', printing each letter.
 * Return: All numbers of base 16 in lowercase.
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	for (i = 48; i <= 57; ++i)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	printf("\n");
	return (0);
}
