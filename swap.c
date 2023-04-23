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
