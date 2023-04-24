#ifndef SORT_H
#define SORT_H

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void swap(int *n1, int *n2);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void QuickSort(int **array, size_t size, int lb, int ub);
int partitiion(int **array, size_t size, int lb, int ub);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t **tail,
		listint_t **curr, listint_t **next_node);
void counting_sort(int *array, size_t size);






#endif
