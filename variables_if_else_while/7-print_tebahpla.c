#include <stdio.h>
/**
 * main - Prints the lowecase alphabet in reverse
 *
 * Description: putchar prints the value of the char variable c, c initializes
 * with 'z' value and the for statement iterates until c ends with 'a' value
 * and uses putchar with each value of c.
 * Return: The lowercase alphabet in reverse.
 */
int main(void)
{
	char c = 'z';

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
