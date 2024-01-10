#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: the array to be sorted
 * @size: the size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, aux = 0;
	int flag = 0;

	if (!array || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				flag = 1;
				print_array(array, size);
			}
		if (flag == 0)
			break;
	}
}
