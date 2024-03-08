#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap - Swaps values
 * @a: Value 1
 * @b: Value 2
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Performs select sort
 * @array: arrays to be sorted
 * @size: size of the arrays
 */

void selection_sort(int *array, size_t size)
{
	size_t i, min_index, j;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
