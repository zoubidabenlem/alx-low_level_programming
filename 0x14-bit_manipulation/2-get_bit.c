#include "main.h"
/**
 * get_bit - ges bit at specified index
 * @n: integer to use
 * @index: index of bit
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 32)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		unsigned long int mask = 1UL << i;

		if (i == index)
		{
			if (n & mask)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
	}
	return (-1);
}
