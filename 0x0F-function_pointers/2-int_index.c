#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index: searches for an int
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if(array == NULL)
		exit(98);
	if(size <= 0)
		return (-1);
	int_index(int *array, int size, int (*cmp)(int))
	{
		int i;
		int b=0;
		for(i = 0; i < size; i++)
		{
			if(cmp(array[i])
				b=1;
				return i;
		}
		if(b == 0)
			return (-1);
	}

}
