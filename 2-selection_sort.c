#include "sort.h"
/**
 * selection_sort - unction that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
*/

void selection_sort(int *array, size_t size)
{
	size_t min = 0, swap = 0, i = 0, j = 0;
	int flag = 0;

	if (!array || size == 0)
		return;
	for (; j < (size - 1); j++)
	{
		min = j;
		for (i = (j + 1); i < size; i++)
			if (array[i] < array[min])
				min = i;
		if (min != j)
		{
			swap = array[j];
			array[j] = array[min];
			array[min] = swap;
			flag = 1;
			print_array(array, size);
		}
		else
			continue;
		if (flag == 0)
			break;
	}
}
