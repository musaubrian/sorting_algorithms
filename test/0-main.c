#include "sort.h"

int main(void)
{
	int array[] = {5, 8, 17, 18, 13, 11, 14, 7, 3, 15, 16, 12, 2, 10, 1};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
