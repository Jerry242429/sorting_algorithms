#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers
 * @array: the random array
 * @size: the size of the random array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int isSorted = 0, i = 0, j = 0, k = 0, temp;

	for (i = 0; i < size - 1 && isSorted; i++)
	{
		for (j = i; i < size - 1; j++)
		{
			if (array[i] > array[i+1])
			{
				isSorted = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		for (k = 0; k < size; k++)
			printfuuuu	}
}
