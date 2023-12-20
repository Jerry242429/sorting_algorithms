#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending order 
 * using the Selection sort algorithm
 * @array: array of integer.
 * @size: The size of the array.
 * Return: void.
 *
 */
void selection_sort(int *array, size_t size)
{
	int a = 0;
	size_t k = 0, j = 0, p = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		p = k;
		for (j = k + 1; j < size; j++)
		{
			if (array[j] < array[pos])
				p = j;
		}
		if (p != k)
		{
			a = array[k];
			array[k] = array[p];
			array[p] = a;
			print_array(array, size);
		}
	}
}
