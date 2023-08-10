#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
*_calloc - allocates memory for an array
*@nmemb: unsigned int
*@size: unsigned int
*Return:calloc returns NULL If int is 0, If malloc fails, _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{

char *ptr;

	if
(nmemb == 0 || size == 0)
	{
return (NULL);
}


ptr = malloc(nmemb * size);

if (ptr == NULL)
{
	return (NULL);
}

memset(ptr, 0, (nmemb * size));

return (ptr);
}
