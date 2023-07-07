#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts binary to int
 * @b: ninary number
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int length = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
		{
			continue;
		}
		if (b[i] == '1')
		{
			num += pow(2, i);
		}
	}
	return (num);
}
