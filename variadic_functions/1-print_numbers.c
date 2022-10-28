#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers, followed by a new line..
  * @separator: String between each number.
  * @n: Int parameter before ellipse..
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i;

	va_start(count, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(count, int), separator);

	printf("%d\n", va_arg(count, int));
	va_end(count);
}
