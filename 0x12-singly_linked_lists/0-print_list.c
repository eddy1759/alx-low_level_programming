#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current)
	{
		printf("[%lu] %s\n", current->len, current->str ? current->str : "(nil)");
		current = current->next;
		count++;
	}
	return (count);
}
