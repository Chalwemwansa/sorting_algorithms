#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list using insertion sort
 *
 * @list: the linked list passed as argument to the function
 * Return: void, does not return anything
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	listint_t *hold, *hold1, *hold3;
	int flag = 1;

	while (flag != 0)
	{
		flag = 0;
		while (*list != NULL && (**list).next != NULL)
		{
			if ((**list).n > ((**list).next)->n)
			{
				hold = (**list).prev;
				hold1 = ((**list).next)->next;
				hold3 = (**list).next;
				((**list).next)->next = *list;
				((**list).next)->prev = hold;
				(**list).next = hold1;
				(**list).prev = hold3;
				hold3 = *list;
				if (hold != NULL)
				{
					*list = hold;
					(**list).next = hold3->prev;
				}
				else
					temp = hold3->prev;
				if (hold1 != NULL)
				{
					*list = hold1;
					(**list).prev = hold3;
				}
				flag = 1;
				*list = temp;
				print_list((const listint_t *)temp);
				break;
			}
			*list = (**list).next;
		}
	}
	*list = temp;
}
