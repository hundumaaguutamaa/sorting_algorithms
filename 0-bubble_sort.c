#include "sort.h"
/**
* bubble_sort - Sort an array of integers. 
* @array: Array to be sorted. 
* @size: Size of the array. 
*
*/


void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp_val;
	int sorted_val;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp_val = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp_val;
                print_array(array, size);
            }
        }    
    }
}

