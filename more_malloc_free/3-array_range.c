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
	max = max - min + 1;
	n = malloc(max * sizeof(*n));
	if (!n)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		n[i] = min;
		min++;
	}
	return (n);
}
