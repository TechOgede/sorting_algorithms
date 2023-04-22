#include "sort.h"

/**
* insertion_sort_list - Implementation of the insertion sort on linked list
* @list: double pointer to a head of a doubly linked list
*
* Description: In insertion sort, the dataset is divided
* into a sorted subsection and an unsorted subsection.
* The sorted subsection is first populated by the first element
* Then, checks are performed to place each element of the unsorted
* subsection in its appropriate place in the sorted subsection.
* However, the implementation below employs swapping to order values.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *temp;

	if (!list)
		return;

	ptr = *list;

	while (ptr)
	{
		while (ptr->next && ptr->n > ptr->next->n)
		{
			temp = ptr->next;
			ptr->next = temp->next;
			temp->prev = ptr->prev;
			if (ptr->prev)
				ptr->prev->next = temp;
			if (temp->next)
				temp->next->prev = ptr;

			ptr->prev = temp;
			temp->next = ptr;

			if (temp->prev)
				ptr = temp->prev;
			else
				*list = temp;
			print_list(*list);
		}
		ptr = ptr->next;
	}
}
