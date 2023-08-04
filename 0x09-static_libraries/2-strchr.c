#include "main.h"

/**
* _strchr - ocates the character in a string
*
*@s: pointer to put the constant
*@c: constant
*
*Return: a pointer to the first occurance of the character @c in the string
*Return NULL if the charcter not found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		s++;
		else
		return (s);
	}
	if (c == '\0')
	return (s);

	return ('\0');
}
