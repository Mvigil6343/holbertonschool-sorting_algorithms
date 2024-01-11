#include "sort.h"

/**
 * lomuto - Main function
 * @array: array
 * @low: int
 * @high: int
 * @size: size
 * Return: i
 */

int lomuto(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low;
	int j, temp;
	size_t k;

	for (j = low; j <= high - 1; ++j)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			if (temp != array[i])
			{
				for (k = 0; k < size; k++)
					printf("%d ", array[k]);
				printf("\n");
			}
			++i;
		}
	}
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;

	if (temp != array[i])
	{
		for (k = 0; k < size; k++)
			printf("%d ", array[k]);
		printf("\n");
	}

	return (i);
}
/**
 * quick_sort_recursive - Main function
 * @array: array
 * @low: int
 * @high: int
 * @size: size
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index = 0;

	if (low < high)
	{
		pivot_index = lomuto(array, low, high, size);
		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}
/**
 * quick_sort - Main function
 * @array: array
 * @size: size
 * Return: nothing
 */


void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

