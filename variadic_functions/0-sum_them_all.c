#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums all its parameters.
  * @n: Int paramater before the ellipse.
  *
  * Return: the sum of all its parameters.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int sum = 0;

	va_start(add, n);

	for (i = 0; i < n; i++)
		sum += va_arg(add, int);

	va_end(add);
	return (sum);
}
