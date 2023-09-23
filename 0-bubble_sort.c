#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in an ascending order.
 * @array: The array to be sorted
 * @size: Size of an array
 * @Return- Array of integers
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swap_res;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swap_res = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap_res = 1;
				print_array(array, size);
			}
		}
		if (swap_res == 0)
		{
			return;
		}
	}
}
