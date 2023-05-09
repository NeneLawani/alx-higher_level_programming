#include "lists.h"

/**
 * check_cycle - a function that checks if a singly linked list has a cycle
 * @list: a pointer to the head of the linked list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *tortoise = list, *hare = list;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
		/* Cycle detected */
			return (1);
		}
	}

		/* No cycle detected */
		return (0);
}

