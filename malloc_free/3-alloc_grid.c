#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *
  */

int **alloc_grid(int width, int height)
{
	
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	if (grid == NULL)
		return (NULL);
	return (grid);
}
