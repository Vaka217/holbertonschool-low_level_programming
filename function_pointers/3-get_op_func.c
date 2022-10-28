#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
  * get_op_func - selecets the correct function to perform the operation.
  * @char: Operation selected by the user.
  *
  * Return: Pointer to the function that corresponds to the operator given.
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
