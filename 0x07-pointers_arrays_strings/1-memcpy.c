#include "main.h"

/**
*_memcpy - copies the memory area
*@dest: where to copy the memory to
*@n: the length of src to be copied
*@src: the memory area to copy from
*
*Return: the pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)

{
		dest[i] = src[1];
	}
	return (dest);
}
