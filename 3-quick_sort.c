#include "sort.h"

/**
 * quick_sort - function that sorts ascending order using Quick sort algorithm
 * @array: array of integer
 * @size: size of array
 * Return: void
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	s(array, 0, size - 1, size);
}

/**
 * part - split the array to lower and higher
 * @array: array of integer
 * @lo: lower value
 * @hi: higher value
 * @size: size of array
 * Return: i
 *
 */
int part(int *array, int lo, int hi, size_t size)
{
	int a = lo - 1, b = lo;
	int p = array[hi], ux = 0;

	for (; b < hi; b++)
	{
		if (array[b] < p)
		{
			a++;
			if (array[a] != array[b])
			{
				ux = array[a];
				array[a] = array[b];
				array[b] = ux;
				print_array(array, size);
			}
		}
	}
	if (array[a + 1] != array[hi])
	{
		ux = array[a + 1];
		array[a + 1] = array[hi];
		array[hi] = ux;
		print_array(array, size);
	}
	return (a + 1);
}

/**
 * s - array qucik sort
 * @array: array of integer
 * @lo: lower of value
 * @hi:higher of value
 * @size: the sizeof array of integer
 * Return: void
 *
 */
void s(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = part(array, lo, hi, size);
		s(array, lo, p - 1, size);
		s(array, p + 1, hi, size);
	}
}
