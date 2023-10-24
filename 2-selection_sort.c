#include "sort.h"

/**
 * selection_sort - sort a list of numbers using the array sort algorithm
 *
 * @array: the array passed as an argument to the algorithm
 * @size: the size of the array to be sorted
 * Return: void, the function does not return anything
 */
void selection_sort(int *array, size_t size)
{
	int flag = 0, temp;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		flag = 1;
		temp = i;
		for (j = i; j < size; j++)
		{
			if (array[temp] > array[j])
			{
				temp = j;
				flag = 0;
			}
		}
		if (flag == 0)
		{
			flag = array[i];
			array[i] = array[temp];
			array[temp] = flag;
			print_array((const int *)array, size);
		}
	}
}
