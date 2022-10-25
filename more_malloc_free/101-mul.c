#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *
  */

int main(int argc, char* argv[])
{
	int i, num1 = 0, num2 = 0, mul = 0;
	if (argc > 2)
	{
		printf("Error\n");
		exit(98);
		return (0);
	}
	for (argc = 0; argv[argc] != NULL; argc++)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (argv[argc][i] < 48 && argv[argc][i] > 57)
			{
				printf("Error\n");
				exit(98);
				return (0);
			}
		}
	}
	num1 = atoi(argv[0]);
	num2 = atoi(argv[1]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
