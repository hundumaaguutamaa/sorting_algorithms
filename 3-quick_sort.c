#include "sort.h"

/**
 * swap_int - Swaps two array elements.
 * @a: First array element.
 * @b: Second array element.
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Partition an array of integers
 * Sorts a (portion of an) array, divides it 
 * into partitions, then sorts those.
 * @array: Array of integers.
 * @size: Size array.
 * @l: First index of array.
 * @h: last index of array.
 *
 * Return: New index position.
 */
int l_partition(int *array, size_t size, int l, int h)
{
	int pivot = array[h], i = l, j;

	for (j = l; j <= h - 1; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (pivot != array[i])
	{
		swap_int(&array[i], &array[h]);
		print_array(array, size);
	}
	return (i);
}

/**
 * lomuto_sort - Implement the quick sort algorithm. 
 * @array: Array.
 * @size: Size of the array. 
 * @l: First index of the array.
 * @h: Last index of the array.
 * 
 * Return: Index of arrays
 */

void lomuto_sort(int *array, size_t size, int l, int h)
{
	int i;

	if (l < h)
	{
		i = l_partition(array, size, l, h);
		lomuto_sort(array, size, l, i - 1);
		lomuto_sort(array, size, i + 1, h);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending order.
 * @array: An array. 
 * @size: Aarray size. 
 * 
 * Return: 0
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}

