#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the insertion sort algorithm.
 * @list: doubly linked list
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	if (!list || !*list)
		return;

	listint_t *head, *tmp;
	head = *list;

	for (head = *list; head != NULL; head = head->next)
	{
		tmp = head;
		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev)
				tmp->prev->next = tmp;
			else
				*list = tmp;

			print_list(*list);
		}
	}
}
