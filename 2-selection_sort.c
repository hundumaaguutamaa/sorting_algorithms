#include "sort.h"

/**
 * selection_sort - Sorts list of elements. 
 * @array: Array to be printed.
 * @size: Number of elements in array. 
 * 
 */
void selection_sort(int *array, size_t size)
{
	size_t inner, outer, smallest, tmp, swap;

	if (array == NULL)
		return;
        
	for (outer = 0; outer < size; outer++)
	{
		for (smallest = outer, inner = outer; inner < size; inner++)
			if (array[inner] < array[smallest])
			{
				smallest = inner;
				swap = 1;
			}

		if (swap == 1)
		{
			tmp = array[smallest];
			array[smallest] = array[outer];
			array[outer] = tmp;

			print_array(array, size);
			swap = 0;
		}
	}
}	
