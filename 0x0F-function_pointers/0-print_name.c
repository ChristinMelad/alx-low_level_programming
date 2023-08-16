#include <stdio.h>
#include "function_pointers.h"


/**
*print_name - prints a name
*@name: string
*@f: pointer to function
*Reurn: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f == NULL)
	return;

	f(name);
}
