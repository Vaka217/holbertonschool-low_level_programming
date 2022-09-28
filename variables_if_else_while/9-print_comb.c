#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Description: putchar prints the value of the char variable c, c initializes
 * with '0' value and the for statement iterates until c ends with '9' value
 * and uses putchar with each value of c. Between numbers, if c is not 9,
 * another two putchars put a ',' and a ' '.
 * Return: All combinations of single-digit numbers separated by commas.
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		if (c < 57)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
