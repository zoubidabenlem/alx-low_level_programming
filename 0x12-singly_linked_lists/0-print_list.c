#include "lists.h"
/**
 * print_list - Prints list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while(h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n",i, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
