#include "main.h"

/**
  * main - adds positive numbers and prints the result.
  * @argc: Count number of arguments.
  * @argv: Array of strings (arguments).
  *
  * Return: 0 or 1 if one of the numbers contains symbols
  * that are not digits..
  */

int main(int argc, char **argv)
{
	int i = 0, j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i] != 0; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
			j += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
