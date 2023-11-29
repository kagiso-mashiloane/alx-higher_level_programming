#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *stop = list;
	listint_t *go = list;

	if (!list)
		return (0);

	while (stop && go && go->next)
	{
		stop = stop->next;
		go = go->next->next;
		if (stop == go)
			return (1);
	}

	return (0);
}
