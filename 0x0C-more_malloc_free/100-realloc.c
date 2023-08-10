#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
*_realloc - reallocates memory using malloc
*@ptr: pointer to the memory previously allocated
*@old_size: int
*@new_size: int
*Return: pointer to new allocate memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{

int *new_ptr;


	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}

if (new_size == old_size)
	{
	return (ptr);
	}


if (ptr == NULL)
{
	new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
}

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
return (ptr);
}
