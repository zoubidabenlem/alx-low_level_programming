#include "main.h"
/**
 * clear_bit - sets bit to 0 at specified index
 * @n: integer to use
 * @index: index of bit
 *
 * Return: 1 if it works
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 32)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		unsigned long int masky = 1UL << i;

		if (i == index)
		{
			*n = *n & ~masky;
			return (1);
		}
	}
	return (-1);
}
