#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Description: putchar prints the value of the char variable c, c initializes
 * with 'a' value and the for statement iterates until c ends with 'z' value
 * and uses putchar with each value of c. Then do the same but from 'A'
 * to 'Z'.
 * Return: The alphabet in lowercase and uppercase.
 */
int main(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	c = 'A';
	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
