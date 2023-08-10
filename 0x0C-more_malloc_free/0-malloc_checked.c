#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
*malloc_checked -check the allocated memory
*@b: unsigned int
*Return: return pointer
*/

void *malloc_checked(unsigned int b)
{

int *ptr;

ptr = malloc (sizeof(b));

if (ptr == NULL)
{
exit(98);
}
else
{
return (ptr);
}
}
