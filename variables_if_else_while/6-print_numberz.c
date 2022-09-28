#include <stdio.h>
/**
 * main - Prints the numbers from 0 to 9
 *
 * Description: putchar prints the value of the char variable c, c initializes
 * with '0' value and the for statement iterates until c ends with '9' value
 * and uses putchar with each value of c.
 * Return: Numbers from 0 to 9 in char type
 */
int main(void)
{
	char c = '0';

	for (c = '0' ; c <= '9' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
