#include "sort.h"

/**
* counting_sort - implementation of the counting sort algo
* @array: array of intes
* @size: size of the array
*
* Description: Counting sort algo
*/

void counting_sort(int *array, size_t size)
{
	int i = 0, *count, *array_2, max;

	if (!array || size < 2)
		return;
	max = array[0];
	for (i = 0; i < (int)size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	count = calloc(max + 1, sizeof(int));
	array_2 = malloc(sizeof(int) * size);
	if (!count || !array_2)
		return;
	for (i = 0; i < (int)size; i++)
		count[array[i]]++;
	for (i = 1; i < max + 1; i++)
		count[i] = count[i] + count[i - 1];
	print_array(count, max + 1);
	for (i = (int)size - 1; i >= 0; i--)
		array_2[--count[array[i]]] = array[i];
	for (i = 0; i < (int)size; i++)
		array[i] = array_2[i];

	free(count);
	free(array_2);
}
