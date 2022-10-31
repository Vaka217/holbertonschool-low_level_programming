#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
  *
  */
void aux(size_t i, size_t j)
{
	if (i < j - 1)
		printf(", ");
}
void print_all(const char * const format, ...)
{
	va_list list;
	size_t i = 0, j;

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
					printf("%s", va_arg(list, char *));
					aux(i, j);
					break;
			}
			i++;
		}
	}
	printf("\n");
}
