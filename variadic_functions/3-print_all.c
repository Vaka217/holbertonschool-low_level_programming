#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
  * aux - checks if comma goes between arguments.
  * @i: Number of characters already count in format.
  * @j: Length of format.
  *
  */

void aux(size_t i, size_t j)
{
	if (i < j - 1)
		printf(", ");
}

/**
  * print_all - prints anything
  * @format: List of types of arguments passed to the function.
  *
  */

void print_all(const char * const format, ...)
{
	va_list list;
	size_t i = 0, j;
	char *str;

	if (format)
	{
		va_start(list, format);
		j = strlen(format);

		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(list, int));
					aux(i, j);
					break;

				case 'i':
					printf("%d", va_arg(list, int));
					aux(i, j);
					break;

				case 'f':
					printf("%f", va_arg(list, double));
					aux(i, j);
					break;

				case 's':
					str = va_arg(list, char *);
					printf("%s", str == NULL ? "(nil)" : str);
					aux(i, j);
					break;
			}
			i++;
		}
	}
	printf("\n");
}
