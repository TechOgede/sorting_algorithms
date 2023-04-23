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
* partition - meat of the quick sort algorithm
* @array: ponter to an array
* @lb: lower bound of the array
* @ub: upper bound of the array
*
* Description: Creates a pivot element which is used to partition the array.
* such that values less or equal to the pivot are to the left,
* values greater than the pivot are to the right.
* This function implements the lomuto partition scheme.
*
* Return: an int that would be used to partition the array
*/

int partition(int **array, int lb, int ub)
{
	int pivot = (*array)[ub], temp, j;

	for (j = lb; j < ub; j++)
	{
		temp = lb - 1;

		if ((*array)[j] <= pivot)
		{
			temp++;
			swap(&(*array)[j], &(*array)[temp]);
			print_array(*array, ub + 1);
		}
	}
	temp++;
	swap(&(*array)[ub], &(*array)[temp]);
	print_array(*array, ub + 1);
	return (temp);
}

/**
* QuickSort - actual driver for the quick sort implementation in this case
* @array: array of values
* @lb: lower bound of the array
* @ub: upper bound of the array
*
* Description: Calls a function to partition the array
* at each recursive level.
*/

void QuickSort(int **array, int lb, int ub)
{
	int loc;

	if (lb < ub)
	{
		loc = partition(array, lb, ub);

		QuickSort(array, lb, loc - 1);

		QuickSort(array, loc + 1, ub);
	}
}



/**
* quick_sort - Implementation of the quick sort algo
* @array: array of ints
* @size: size of the array
*
* Description: Quicksort
*/

void quick_sort(int *array, size_t size)
{
	int lb, ub;

	lb = 0;
	ub = size - 1;

	QuickSort(&array, lb, ub);
}
