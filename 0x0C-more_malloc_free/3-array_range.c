#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
*array_range - creates an array of integers.
*@min: int
*@max: int
*Return:min > max, return NULL ,If malloc fails, return NULL
*/

int *array_range(int min, int max)

{

int *array;
int size;
int i;

if (min > max)
	{
return (NULL);
	}

size = max - min + 1;

array = malloc(sizeof(int) * size);

if (array == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
{
	array[i] = min++;
}

return (array);
}
