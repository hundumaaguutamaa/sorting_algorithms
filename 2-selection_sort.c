#include "sort.h"

/**
 * selection_sort - Sorts list of elements. 
 * @array: Array to be printed.
 * @size: Number of elements in array. 
 * 
 */
void selection_sort(int *array, size_t size)
{
	size_t outer_loop, inner_loop, less, tmp;

	if (array == NULL)
		return;

	for (outer_loop = 0; outer_loop < size; outer_loop++)
	{
		for (less = outer_loop, inner_loop = outer_loop; inner_loop < size; inner_loop++)
			if (array[inner_loop] < array[less])
			{
				less = inner_loop;
			}
    }
		{
			tmp = array[less];
			array[less] = array[outer_loop];
			array[outer_loop] = tmp;
			print_array(array, size);
		}
	}
