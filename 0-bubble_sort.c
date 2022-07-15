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
	size_t i, j;
	int n;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			n = array[j];
			array[j] = array[j + 1];
			array[j + 1] = n;
			print_array(array, size)
		}
	}
}
