#include <stdio.h>
#include "function_pointers.h"


/**
*array_iterator - prints an integer
*@array: pointer to an int
*@action: pointer to the function
*@size: size of array
*Return : nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i;

	if (array == NULL || action == NULL)
{
return;
}

for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
