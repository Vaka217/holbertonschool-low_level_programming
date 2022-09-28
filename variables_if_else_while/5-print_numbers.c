#include <stdio.h>
/**
  * main - Prints numbers from 0 to 9.
  *
  * Description: The for statement iterates from 0 to 9, printing each number.
  * Return: Numbers from 0 to 9.
  */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; ++i)
		printf("%d", i);
	printf("\n");
	return (0);
}
