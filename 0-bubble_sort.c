#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers
 * @array: the random array
 * @size: the size of the random array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t isSorted = 1, i = 0, j = 0, temp;

	for (i = 0; i < size - 1 && isSorted; i++)
	{
		isSorted = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				isSorted = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
