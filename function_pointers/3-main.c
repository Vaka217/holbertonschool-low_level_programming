#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv)
{
	char operator = *argv[3];
	int num1 = atoi(argv[2]), num2 = atoi(argv[4]);
	int (*calc)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator != '+' || operator != '-' || operator != '*' || operator != '/' || operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(argv[3]);
	printf("%d\n", calc(num1, num2));
	return (0);
}
