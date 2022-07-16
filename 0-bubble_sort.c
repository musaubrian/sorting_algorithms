#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array to be sorted
 *
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, n;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
			print_array(array, size);
		}
	}
}
