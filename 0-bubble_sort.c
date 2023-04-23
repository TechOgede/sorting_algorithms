#include "sort.h"


/**
* bubble_sort - An implementation of the bubble sort algorithm
* @array: array of ints
* @size: size of the array
*
* Description: Bubble sort works by comparing adjacent elements
* and swapping them as per the desired order
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}

		}

		if (!swapped)
			break;
	}
}
