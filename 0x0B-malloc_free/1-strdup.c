#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a new string
* which is a duplicate of the string str
*@str: string
*Return:NULL if str = NULL, On success _strdup function returns
* a pointer to the duplicated string
*/

char *_strdup(char *str)

{
char *dup;

if (str == NULL)
return (NULL);

dup = malloc(strlen(str) + 1);

if (dup == NULL)
return (NULL);

strcpy(dup, str);
return (dup);
}
