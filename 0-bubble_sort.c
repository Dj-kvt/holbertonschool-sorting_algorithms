#include "sort.h"

/**
 * bubble_sort - type of algorithm
 *
 * @array: The array
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t count;
	size_t tmp = 0;
	size_t calcul_size;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (calcul_size = 0; calcul_size < size; calcul_size++)
	{
		for (count = 0; count < size - 1; count++)
		{
			if (array[count] > array[count + 1])
			{
				tmp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
