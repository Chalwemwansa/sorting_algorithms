#include "sort.h"

/**
 * bubble_sort - sorts a list of integers using bubble sort algorithm
 *
 * @array: the array to be sorted
 * @size: the sixe of the array to be sorted
 * Return: void, does not return anything
 */
void bubble_sort(int *array, size_t size)
{
	int temp, flag = 1;
	size_t i;

	while (flag != 0)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = 1;
				print_array((const int *)array, size);
			}
		}
	}
}
