#include <stdio.h>
/**
  * main - Prints the alphabet in lowercase
  *
  * Description: putchar prints the value of the char variable c, c initializes
  * with 'a' value and the for statement iterates until c ends with 'z' value
  * and uses putchar with each value of c.
  * Return: The alphabet in lowercase.
  */
int main(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
