#include "main.h"
/**
 * set_bit - sets bit to 1 at specified index
 * @n: integer to use
 * @index: index of bit
 *
 * Return: 1 if it works
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		unsigned long int masky = 1UL << i;

		if (i == index)
		{
			*n = *n | masky;
			return (1);
		}
	}
	return (-1);
}
