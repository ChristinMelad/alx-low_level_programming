#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
*string_nconcat -concatenate two strings
*@n: unsigned int
*@s1: first string
*@s2: second string
*Return: NULL if function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *result;
unsigned int len1, len2;

if (s1 == NULL)
	{
	s1 = "";
	}

if (s2 == NULL)
	{
	s2 = "";
	}

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
{
	n = len2;
}

result = malloc(len1 + n + 1);
if (result == NULL)
{
	return (NULL);
}

memcpy(result, s1, len1);
memcpy(result + len1, s2, n);

result[len1 + n] = '\0';

return (result);
}
