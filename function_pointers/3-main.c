#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv)
{
	char operator;
	int num1, num2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = *argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(argv[2]);
	printf("%d\n", calc(num1, num2));
	return (0);
}
