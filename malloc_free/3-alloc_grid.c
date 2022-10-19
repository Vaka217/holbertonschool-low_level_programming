#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *
  */

int **alloc_grid(int width, int height)
{
	
	int **grid, **grid2;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));
	if (grid == NULL)
		return (NULL);
	return (grid2);
}
