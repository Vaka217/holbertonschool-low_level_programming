#include "search_algos.h"

/**
  * print_array - Prints the array from left to right
  * @array: Array to print
  * @left: First index to print.
  * @right: Last index to print.
  *
  */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
	}
}

/**
  * binary_search - searches value in sorted array of ints using Binary search
  * @array: Pointer to the first element of the array to seach in
  * @size: Number of elements in array
  * @value: Value to search
  *
  * Return: The index where the value is located, -1 otherwise
  */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (!array)
		return (-1);
	print_array(array, left, right);
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
		if (left < right)
			print_array(array, left, right);
	}
	return (-1);
}
