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
* shell_sort - Implementation of shell sort using Knuth sequence
* @array: array of ints
* @size: size of the array
*
* Description: Similar to insertion sort, but it first smaller values
* towards the end of the array to the begining.
*/

void shell_sort(int *array, size_t size)
{
	int i, j, k, interval, n = size;

	k = 1;
	while (k <= (n - 1) / 9)
		k = 3 * k + 1;

	for (interval = k; interval >= 1; interval = interval / 3)
	{
		for (i = interval; i < n; i++)
		{
			for (j = i - interval; j >= 0; j = j - interval)
			{
				if (array[j + interval] < array[j])
					swap(&array[j], &array[j + interval]);

				else
					break;
			}
		}

		print_array(array, size);
	}
}
