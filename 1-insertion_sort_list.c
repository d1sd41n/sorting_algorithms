#include "sort.h"

listint_t *switch_nodes(listint_t *list, listint_t *prev, listint_t *next_n);

/**
 * insertion_sort_list - function
 * @list: var
 * Return: something or none
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *next, *node;
	int flag;

	if (list == NULL || *list == NULL)
		return;

	node = (*list)->next;

	next = node;
	prev = node->prev;
	while (node != NULL)
	{
		flag = 1;

		while (prev != NULL && (prev->n > next->n))
		{

			if (prev->prev != NULL && flag)
			{
				prev->prev->next = next;
				flag++;

			}

			if (next->next != NULL  && flag)
			{
				next->next->prev = prev;
			}
			next->prev = prev->prev;
			prev->next = next->next;
			next->next = prev;
			prev->prev = next;
			*list = switch_nodes(*list, prev, next);
			prev = next->prev;

			print_list(*list);
		}
		prev = node;
		node = node->next;
		next = node;

	}

}

/**
 * switch_nodes - function
 * @list: var
 * @prev: var
 * @next: var
 * Return: something or none
 */
listint_t *switch_nodes(listint_t *list, listint_t *prev, listint_t *next)
{
	listint_t *aux;

	aux = prev;

	prev = next;

	next = aux;
	if (!prev->prev)
	{
		return (prev);
	}
	return (list);
}
