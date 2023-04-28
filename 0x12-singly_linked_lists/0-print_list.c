#include "lists.h"
/**
 * print_list - Prints list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned long i;

	while(h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n",h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
