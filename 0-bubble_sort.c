#include "sort.h"

/**
 * bubble_sort - algos bubble sort
 * @size: input size
 * @array: input pointer
 * Return: Return none
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, swap;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
