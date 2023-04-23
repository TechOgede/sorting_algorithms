#include "sort.h"


/**
* swap - swaps two values
* @n1: first value
* @n2: second value
*
* Description: Basic swap using a temp variable
*/

void swap(int *n1, int *n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}



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
