#include "main.h"
/**
 * flip_bits - number of bits to flip
 * @n: first integer
 * @m: second integer
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		if (diff & 1)
		{
			count++;
		}
		diff = diff >> 1;
	}
	return (count);
}
