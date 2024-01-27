#include "lists.h"

/**
 * print_dlistint - function to print linked list
 * @h: parameter
 * Return: number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr = NULL;
	size_t count = 0;

	if (h == NULL)
		pritf("The linked list is empty\n");
	ptr = h;

	while (ptr != NULL)
	{
		pritf("%d", ptr->data);
		ptr = ptr->next;
		count++;
	}
	return (count);

}
