#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/***
*_realloc - reallocates memory using malloc
*@ptr: pointer to the memory previously allocated
*@old_size: int
*@new_size: int
*Return: pointer to new allocate memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{

int *new_ptr;
unsigned int copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}

if (ptr == NULL)
{
	return (malloc(new_size));
}
	if (new_size == old_size)
	{
		return (ptr);
	}

new_ptr = malloc(new_size);

if (new_ptr != NULL)
{
	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);
	free(ptr);
}
return (new_ptr);
}
