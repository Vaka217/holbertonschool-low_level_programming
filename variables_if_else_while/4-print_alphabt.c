#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase except q and e.
 *
 * Description: putchar prints the value of the char variable c, c initialize
 * with 'a' value and the for statement iterates until c ends with 'z' value
 * and uses putchar with each value of c except 'q' and 'e'.
 * Return: The alphabet in lowercase except q and e.
 */
int main(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q')
		{
			if (c != 'e')
			{
				putchar(c);
			}
		}
	}
	putchar('\n');
	return (0);
}
