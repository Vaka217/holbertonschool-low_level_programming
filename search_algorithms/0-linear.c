#include "search_algos.h"

/**
  * linear_search - searches value in an array of integers using linear search
  * @array: Array of integers to search
  * @size: Size of the array
  * @value: Value to search in the array
  *
  * Return: The index of the value searched, otherwise -1
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
