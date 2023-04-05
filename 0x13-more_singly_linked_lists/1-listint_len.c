#include "lists.h"

/**
 * listint_len - return number of element in a linked list
 * @h: type of listint_t liked list to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
