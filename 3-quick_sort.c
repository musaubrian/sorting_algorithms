#include "sort.h"

/**
 * swap_int - swap to int's
 *
 * @a: int a to be swapped
 * @b: int b to be swapped
 *
 * Return: swapped int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partition @array
 *
 * @array: array to be partitioned
 * @low: lower part of the array
 * @high: high part of the array
 * @size: size of the array
 *
 * Return: index of pivote (int)
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * lomuto_qsort - sort recursively an array
 *
 * @array: array to be sorted
 * @low: lowest value of the array
 * @high: highest value of the array
 * @size: size of the array
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int val;

	if (low < high)
	{
		val = partition(array, low, high, size);
		lomuto_qsort(array, low, val - 1, size);
		lomuto_qsort(array, val + 1, high, size);
	}
}

/**
 * quick_sort - quick sort algorithm using lomuto partition
 *
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: sorted array
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
