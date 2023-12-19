#include "sort.h"

/**
 * insertion_sort_list -  sort a list in ascending order
 * @list: the random list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *t;
	int n;

	if (!list)
		return;
	t = *list;
	while (t)
	{
		while (t)
		{
			if (t->next)
			{
				if (t->n > t->next->n)
				{
					n = t->n;
					*(int *)&t->n = t->next->n;
					*(int *)&t->next->n = n;
					t = *list;
					print_list(*list);
					break;
				}
			}
			t = t->next;
		}
	}
}

