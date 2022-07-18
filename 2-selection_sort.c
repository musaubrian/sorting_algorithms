#include "sort.h"

/**
 * locate_minimum - finds the minimum from current index
 *
 * @array: array to be searched
 * @index: starting index of the search
 * @size: size of the array
 *
 * Return: (int) index of minimum if found or
 * same index if index is the minimum
 */

int locate_minimum(int *array, int index, size_t size)
{
	int min, min_idx;
	int i;

	min = array[index];
	min_idx = index;

	for (i = index; i < (int)size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			min_idx = i;
		}
	}

	if (min_idx == index)
	{
		return (-1);
	}
	return (min_idx);
}

/**
 * selection_sort - sorts @array using Selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of @array
 */

void selection_sort(int *array, size_t size)
{
	int i, min, temp_val;

	for (i = 0; i < (int)size; i++)
	{
		min = locate_minimum(array, i, size);

		if (min != -1)
		{
			temp_val = array[i];
			array[i] = array[min];
			array[min] = temp_val;
			print_array(array, size);
		}
	}
}
