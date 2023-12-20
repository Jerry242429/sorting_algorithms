#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using 
 * the Selection sort algorithm
 * @array: arrayof integer
 * @size: The size of the array.
 * Return: void
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t k = 0, j = 0, pos = 0;
	int a = 0; 

	if (array == NULL || size == 0)
		return;

	for (; k < size - 1; k++)
	{
		pos = k;
		for (j = k + 1; j < size; j++)
		{
			if (array[j] < array[pos])
				pos = j;
		}
		if (pos != k)
		{
			a = array[k];
			array[k] = array[pos];
			array[pos] = a;
			print_array(array, size);
		}
	}
}
