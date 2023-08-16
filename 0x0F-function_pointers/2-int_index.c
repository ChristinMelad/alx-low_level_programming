#include "function_pointers.h"

/**
*int_index -searches for an integer
*@cmp: poiner to the function
*@array: array
*@size: number of elements
*Return: -1 if no element matches or size is <= 0
*and return -1 if cmp equal NULL
*/

int int_index(int *array, int size, int (*cmp)(int))

{
int i;

if (array == NULL || cmp == NULL || size <= 0)
{
	return (-1);
}

for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
}
return (-1);
}
