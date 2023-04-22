#include "sort.h"

/**
* selection_sort - Implementation of the selection sort algorithm
* @array: array of ints
* @size: size of the array
*
* Description: Similar to the insertion sort in that it
* implies subsections of the array, but in this case, the sorted subsection
* is initially empty.
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
