#include "main.h"
#include <stdlib.h>

/**
 *
 */

int *array_range(int min, int max)
{
	int *n = NULL, i;

	if (min > max)
		return (NULL);
	n = malloc((max + 1) * sizeof(*n));
	if (!n)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		n[i] = min;
		min++;
	}
	return (n);
}
