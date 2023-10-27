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

	prn(array, first, last, -1, size);
}

/**
 * my_function - prints the array and also calls
 *
 * @first: the first element
 * @last: the last element
 * @pivot: the pivot
 * @size: the size of the array in total
 * @flag: checksss if array has been swapped or not
 * Return: void
 */
void prn(int *array, int first, int last, int pivot, size_t size)
{
	sort_array(array, first, pivot, size);
	sort_array(array, pivot + 1, last, size);
}

/**
 * sort_me - sorts an array
 *
 * @array: the array to be sorted
 * @i: the value to swap with
 * @j: value to swap i with
 * Return: void
 */
void sort_me(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
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
	int pivot, i = first - 1, j, temp;

	if (first < last)
	{
		for (j = first; j < last; j++)
		{
			if (array[j] < array[last - 1])
			{
				i = i + 1;
				if (i != j)
				{
					sort_me(array, i, j);
					print_array((const int *)array, size);
				}
			}

		}
		print_array((const int *)array, size);
		pivot = i + 1;
		temp = array[pivot];
		array[pivot] = array[last - 1];
		array[last - 1] = temp;
		prn(array, first, last, pivot, size);
	}
	else
		return;
}
