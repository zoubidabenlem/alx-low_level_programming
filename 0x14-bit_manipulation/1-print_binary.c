#include "main.h"
/**
 * print_binary - print binary value
 * @n: integer to convert
 */

void print_binary(unsigned long int n)
{
	int length = sizeof(n) * 8;
	int lz = 1;
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		unsigned long int filler = 1UL << i;

		if (n & filler)
		{
			lz = 0;
			_putchar('1');
		}
		else if (!lz)
		{
			_putchar('0');
		}	
	}
	if (lz)
	{
		_putchar('0');
	}
}
