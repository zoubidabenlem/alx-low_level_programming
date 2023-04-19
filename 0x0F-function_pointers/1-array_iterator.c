#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array itterator: iterates array
 * @array: array to iterate
 * @size: size of an array
 * @action: action to perform
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for(i = 0; i <size; i++)
	{
		action(array[i]);
	}
}
