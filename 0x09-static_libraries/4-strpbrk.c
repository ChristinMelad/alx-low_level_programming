#include "main.h"

/**
* _strpbrk - search for any set of bytes
*@s: string to search
*@accept: string contains the bytes
*
* Return: pointer to the byte in s that match one of bytes in accept
*or NLL if no bytes are found
*
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
}
return ('\0');
}
