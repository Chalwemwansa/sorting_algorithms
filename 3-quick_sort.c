#include "sort.h"

/** 
 * quick_sort - sorts an array using quick sort
 *
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: void, does not return anything
 */
void quick_sort(int *array, size_t size)
{
	int first = 0, last = (int)size;

	sort_array(array, first, last, size);
}

/**
 * sort_array - sorts an array recursively
 *
 * @array: the array to be sorted
 * @first: the first element in the partition
 * @last: the last element in the partition
 * @size: the size of the array in full
 * Return: void, does not return anything
 */
void sort_array(int *array, int first, int last, size_t size)
{
	int pivot = last - 1, i = first - 1, j, temp;

	if (first != last)
	{
		for (j = first; j < last - 1; j++)
		{
			if (array[j] < array[pivot])
			{
				++i;
				if (i != j)
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
					print_array((const int *)array, size);
				}
			}
		}
		pivot = ++i;
		temp = array[pivot];
		array[pivot] = array[last - 1];
		array[last - 1] = temp;
		sort_array(array, pivot + 1, last, size);
		sort_array(array, first, pivot, size);
	}
	else
		return;
}
